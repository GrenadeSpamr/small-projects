title Python Interpreter/Compiler
color 1a
echo off
goto main

:main
cls
echo =============================================
echo[
echo		Python Interpreter Front-end
echo[
echo ---------------------------------------------
echo[
set /p source= "Enter source path: "

echo[
call start WinPython\python-3.5.4\python.exe %source%
echo ---------------------------------------------
echo[
choice /c ie /n /m "[I]nterpet once more, or [E]xit? "
if ERRORLEVEL 2 goto exit
if ERRORLEVEL 1 goto main

:exit
exit
