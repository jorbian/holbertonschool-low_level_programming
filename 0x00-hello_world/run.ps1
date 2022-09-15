#!/usr/bin/env pwsh 

param(
    [string]$File,
    [string]$Path=$PSScriptRoot)

Set-Location $Path 

$GivenValidFileName=$false
do {
    if (Test-Path -Path $File) {
        $GivenValidFileName=$true 
    }
    else {
        Write-Host "'$File' NOT DECTECTED AT '$Path.'`n"
        $File = Read-Host -Prompt "PLEASE ENTER THE NAME OF A VALID FILE: "
    }
} until($GivenValidFileName)

$NewFile = ""
if ($File.IndexOf('.c') -lt 0) {
    $NewFile = "$File.c"
    Copy-Item -Path $File -Destination $NewFile
    $File = $NewFile
}

Invoke-Expression "gcc $File"
Invoke-Expression "./a.out"

if ($NewFile) {
    Remove-Item $NewFile
}
Remove-Item "./a.out"