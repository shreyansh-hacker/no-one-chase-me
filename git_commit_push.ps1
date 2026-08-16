$ErrorActionPreference = "Stop"
Set-Location "$PSScriptRoot"

Write-Host "Enter commit message:"
$message = Read-Host

if ([string]::IsNullOrWhiteSpace($message)) {
    Write-Error "Commit message cannot be empty."
    exit 1
}

Write-Host "--- git add -A ---"
git add -A
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

Write-Host "--- git commit -m ---"
git commit -m $message
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

Write-Host "--- git push ---"
git push origin HEAD
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

Write-Host "Push successful."
