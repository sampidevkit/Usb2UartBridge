@echo off

echo Removing *.workspace files...
del *.workspace  /f /q /s
echo.

echo Removing *.pdsbak files...
del *.pdsbak /f /q /s
echo.

echo Done.