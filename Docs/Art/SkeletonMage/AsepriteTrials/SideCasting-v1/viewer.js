"use strict";

const controls = Object.fromEntries(["play", "restart", "speed", "scale", "clip", "frame", "previous", "next"].map(id => [id, document.getElementById(id)]));
const idleImage = document.getElementById("idle");
const castImage = document.getElementById("cast");
const idleStatus = document.getElementById("idle-status");
const castStatus = document.getElementById("cast-status");
const idleFrames = MAGE_REVIEW.clips.find(clip => clip.name === "idle").frames;
let castFrames = MAGE_REVIEW.demo;
let playing = true;
let elapsed = 0;
let previousTime = 0;
let castIndex = 0;
let loaded = false;

function sample(frames, time) {
  const duration = frames.reduce((sum, frame) => sum + frame.ms, 0);
  let remaining = time % duration;
  let index = 0;
  while (remaining >= frames[index].ms && index < frames.length - 1) remaining -= frames[index++].ms;
  return { index, loops: Math.floor(time / duration), duration };
}

function paint() {
  const idle = sample(idleFrames, elapsed);
  const cast = sample(castFrames, elapsed);
  castIndex = cast.index;
  if (idleImage.getAttribute("src") !== idleFrames[idle.index].src) idleImage.src = idleFrames[idle.index].src;
  if (castImage.getAttribute("src") !== castFrames[cast.index].src) castImage.src = castFrames[cast.index].src;
  idleStatus.textContent = `Кадр ${idle.index + 1} / ${idleFrames.length} · ${idleFrames[idle.index].phase} · повторов: ${idle.loops}`;
  castStatus.textContent = `Кадр ${cast.index + 1} / ${castFrames.length} · ${castFrames[cast.index].phase} · повторов: ${cast.loops}`;
  controls.frame.value = String(cast.index);
  controls.play.textContent = playing ? "Пауза" : "Продолжить";
}

function seek(index) {
  playing = false;
  const bounded = (index + castFrames.length) % castFrames.length;
  elapsed = castFrames.slice(0, bounded).reduce((sum, frame) => sum + frame.ms, 0);
  paint();
}

controls.play.addEventListener("click", () => { playing = !playing; paint(); });
controls.restart.addEventListener("click", () => { elapsed = 0; paint(); });
controls.scale.addEventListener("change", () => document.documentElement.style.setProperty("--sprite-size", `${128 * Number(controls.scale.value)}px`));
controls.clip.addEventListener("change", () => {
  castFrames = controls.clip.value === "demo" ? MAGE_REVIEW.demo : MAGE_REVIEW.clips.find(clip => clip.name === controls.clip.value).frames;
  controls.frame.max = String(castFrames.length - 1);
  elapsed = 0;
  paint();
});
controls.frame.addEventListener("input", () => seek(Number(controls.frame.value)));
controls.previous.addEventListener("click", () => seek(castIndex - 1));
controls.next.addEventListener("click", () => seek(castIndex + 1));

function tick(now) {
  if (loaded && playing && previousTime) elapsed += (now - previousTime) * Number(controls.speed.value);
  previousTime = now;
  if (loaded) paint();
  requestAnimationFrame(tick);
}

const sources = [...new Set(MAGE_REVIEW.clips.flatMap(clip => clip.frames.map(frame => frame.src)))];
Promise.all(sources.map(src => new Promise((resolve, reject) => {
  const image = new Image();
  image.onload = resolve;
  image.onerror = () => reject(new Error(`Не загружен ${src}`));
  image.src = src;
}))).then(() => {
  loaded = true;
  document.getElementById("load-status").textContent = `Загружены все ${sources.length} PNG. Пауза и стрелки позволяют рассмотреть каждый кадр.`;
  paint();
}).catch(error => { document.getElementById("load-status").textContent = error.message; });
requestAnimationFrame(tick);
