'use strict';
const $=id=>document.getElementById(id);
const clips=Object.fromEntries(DATA.clips.map(c=>[c.name,c]));
const pictures={};
const labels={'idle':'Ожидание','walk':'Ходьба','cast-ready':'Готовность','cast-enter':'Вход в стойку','cast-hold':'Удержание','cast-release':'Выпуск','cast-exit':'Выход из стойки'};
let time=0,paused=false,last=0,spellTime=0,holdMs=3000,selected='cast-hold',scrub=null;
let lastHeld=0;
for(const [name,label] of Object.entries(labels)){
  const option=document.createElement('option');option.value=name;option.textContent=label;$('clip').append(option);
}
$('clip').value=selected;
function draw(id,name,index){
  const canvas=$(id),ctx=canvas.getContext('2d'),c=clips[name];
  ctx.imageSmoothingEnabled=false;ctx.clearRect(0,0,128,128);
  ctx.drawImage(pictures[name],index%c.columns*128,Math.floor(index/c.columns)*128,128,128,0,0,128,128);
}
function frameAt(name,t){const c=clips[name];return Math.floor(t/c.ms)%c.count;}
function stageAt(t){
  const enter=clips['cast-enter'].count*clips['cast-enter'].ms;
  const release=clips['cast-release'].count*clips['cast-release'].ms;
  const exit=clips['cast-exit'].count*clips['cast-exit'].ms;
  if(t<enter)return {name:'cast-enter',index:frameAt('cast-enter',t),status:'Вход в стойку'};
  t-=enter;
  if(t<holdMs){lastHeld=frameAt('cast-hold',t);return {name:'cast-hold',index:lastHeld,status:`Удержание · ${(t/1000).toFixed(1)} / ${(holdMs/1000).toFixed(1)} с`};}
  // Select the final held pose from elapsed time, independent of display FPS.
  lastHeld=frameAt('cast-hold',Math.max(0,holdMs-.001));t-=holdMs;
  if(t<release){const i=frameAt('cast-release',t);return {name:DATA.release_for_hold_frame[lastHeld],index:i,status:i===2?'Выпуск · момент появления снаряда':'Выпуск'};}
  t-=release;
  if(t<exit)return {name:'cast-exit',index:frameAt('cast-exit',t),status:'Выход из стойки'};
  t-=exit;return {name:'cast-ready',index:frameAt('cast-ready',t),status:'Готовность · можно начать следующий каст'};
}
function render(){
  for(const name of ['idle','walk']){const i=frameAt(name,time);draw(name,name,i);$(name+'-status').textContent=`Кадр ${i+1} / ${clips[name].count}`;}
  const stage=stageAt(spellTime);draw('spell',stage.name,stage.index);$('spell-status').textContent=stage.status;
  const i=scrub===null?frameAt(selected,time):scrub;draw('single',selected,i);$('frame').value=i;
  $('single-status').textContent=`${labels[selected]} · кадр ${i+1} / ${clips[selected].count}${clips[selected].loop?' · цикл':' · переход'}`;
}
$('pause').onclick=()=>{paused=!paused;if(!paused)scrub=null;$('pause').textContent=paused?'Продолжить':'Пауза';};
$('cast').onclick=()=>{holdMs=Math.max(100,Math.min(30000,(Number($('hold').value)||3)*1000));spellTime=0;paused=false;scrub=null;$('pause').textContent='Пауза';};
$('clip').onchange=()=>{selected=$('clip').value;scrub=null;$('frame').max=clips[selected].count-1;render();};
$('frame').oninput=()=>{paused=true;scrub=Number($('frame').value);$('pause').textContent='Продолжить';render();};
$('background').onchange=()=>{for(const c of document.querySelectorAll('canvas'))c.style.background=$('background').value;};
Promise.all(Object.entries(DATA.images).map(([name,src])=>new Promise((resolve,reject)=>{const im=new Image();im.onload=()=>{pictures[name]=im;resolve();};im.onerror=()=>reject(new Error('Не загрузился атлас '+name));im.src=src;}))).then(()=>{
  requestAnimationFrame(function tick(now){if(!paused&&last){const dt=Math.min(now-last,100)*Number($('speed').value);time+=dt;spellTime+=dt;}last=now;render();requestAnimationFrame(tick);});
}).catch(error=>{$('error').textContent=error.message;});
