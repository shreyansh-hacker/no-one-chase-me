@echo off
setlocal
set "SRC=%1"
set "OUT=%~dp1%~n1_run.exe"
set "INPUT=%~dp0input.txt"
set "OUTPUT=%~dp0output.txt"
if exist "%OUT%" del /f /q "%OUT%"
C:\mingw64\bin\g++.exe "%SRC%" -o "%OUT%"
if errorlevel 1 exit /b 1
"%OUT%" < "%INPUT%" > "%OUTPUT%"
endlocal
