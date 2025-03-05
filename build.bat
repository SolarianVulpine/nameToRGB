@echo off
echo Compiling Name Color Generator...
gcc main.c functions\color_conversion.c functions\input_handling.c functions\theme.c -Iheaders -o namecolor.exe

if %ERRORLEVEL% NEQ 0 (
  echo Compilation failed.
  pause
  exit /b %ERRORLEVEL%
)

echo Build successful.
echo Running program...
namecolor.exe
pause
