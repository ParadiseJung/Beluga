@echo off
setlocal
call "%~dp0_SetEnv.bat"
%UE_CMD_EXE% -Project="%UPROJECT_PATH%" %*