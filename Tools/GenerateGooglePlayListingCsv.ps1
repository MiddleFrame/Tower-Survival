param(
    [string]$Source = "$PSScriptRoot/../Docs/GooglePlayASO.md",
    [string]$Output = "$PSScriptRoot/../Docs/GooglePlayListingTranslations.csv"
)

$ErrorActionPreference = 'Stop'
$text = Get-Content -LiteralPath $Source -Raw -Encoding UTF8
$listings = @(
    @{ Locale = 'en-US'; Header = 'English listing' },
    @{ Locale = 'ru-RU'; Header = 'Russian listing' },
    @{ Locale = 'pt-BR'; Header = 'Portuguese \(Brazil\) listing' },
    @{ Locale = 'es-419'; Header = 'Spanish \(Latin America\) listing' },
    @{ Locale = 'de-DE'; Header = 'German listing' },
    @{ Locale = 'fr-FR'; Header = 'French listing' },
    @{ Locale = 'tr-TR'; Header = 'Turkish listing' },
    @{ Locale = 'id'; Header = 'Indonesian listing' },
    @{ Locale = 'pl-PL'; Header = 'Polish listing' },
    @{ Locale = 'it-IT'; Header = 'Italian listing' }
)

$rows = foreach ($listing in $listings) {
    $sectionMatch = [regex]::Match(
        $text,
        "(?ms)^## $($listing.Header).*?\r?\n(?<body>.*?)(?=^## |\z)")
    if (-not $sectionMatch.Success) {
        throw "Listing section not found for $($listing.Locale)"
    }

    $fields = [regex]::Matches(
        $sectionMatch.Groups['body'].Value,
        '(?ms)^### [^\r\n]+\r?\n(?<value>.*?)(?=^### |\z)')
    if ($fields.Count -lt 3) {
        throw "Expected name, short description, and full description for $($listing.Locale)"
    }

    $name = ($fields[0].Groups['value'].Value.Trim() -split '\r?\n\r?\n')[0].Trim()
    $shortDescription = $fields[1].Groups['value'].Value.Trim()
    $fullDescription = $fields[2].Groups['value'].Value.Trim()

    if ($name.Length -gt 30) { throw "$($listing.Locale) app name exceeds 30 characters" }
    if ($shortDescription.Length -gt 80) { throw "$($listing.Locale) short description exceeds 80 characters" }
    if ($fullDescription.Length -gt 4000) { throw "$($listing.Locale) full description exceeds 4000 characters" }

    [pscustomobject]@{
        locale = $listing.Locale
        app_name = $name
        short_description = $shortDescription
        full_description = $fullDescription
    }
}

$rows | ConvertTo-Csv -NoTypeInformation | Set-Content -LiteralPath $Output -Encoding UTF8
Write-Host "Generated $($rows.Count) localized listings: $Output"
