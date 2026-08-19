$ErrorActionPreference = "Stop"
$scriptPath = "C:\Users\shrey\Desktop\dsa\now_beat_me\git_hotkey.ahk"
$ahkPath = "C:\Users\shrey\AppData\Local\Programs\AutoHotkey\v2\AutoHotkey64.exe"

if (-not (Test-Path $ahkPath)) {
    throw "AutoHotkey executable not found at: $ahkPath"
}

if (-not (Test-Path $scriptPath)) {
    throw "Hotkey script not found at: $scriptPath"
}

Start-Process -FilePath $ahkPath -ArgumentList @($scriptPath) -WindowStyle Hidden
Write-Host "Git hotkey started. Press Ctrl+Shift+Z."
