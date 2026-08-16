#Requires AutoHotkey v2.0

^+z::
{
    RunWait("powershell -NoProfile -ExecutionPolicy Bypass -File \"C:\Users\shrey\Desktop\dsa\now_beat_me\git_commit_push.ps1\"", , "Min")
}
