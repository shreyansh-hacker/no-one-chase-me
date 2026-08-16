@echo off
set "AHK=%LOCALAPPDATA%\Programs\AutoHotkey\AutoHotkey64.exe"
set "SCRIPT=%~dp0git_hotkey.ahk"

if not exist "%AHK%" (
    echo AutoHotkey not found at: %AHK%
    echo Install it first, then run this file again.
    pause
    exit /b 1
)

if not exist "%SCRIPT%" (
    echo Script not found: %SCRIPT%
    pause
    exit /b 1
)

start "" "%AHK%" "%SCRIPT%"
echo Git hotkey started. Press Ctrl+Shift+Z.
