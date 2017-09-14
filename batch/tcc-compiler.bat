title tcc compiler
color 1a
echo off
goto main

:main
cls
echo[
echo ==============================================
echo[
echo		TCC Compiler Front-end
echo[
echo ----------------------------------------------
echo[
set /p source= "Enter source path: "
choice /n /m "Is the path correct [y/n]? "

if ERRORLEVEL 2 goto main
if ERRORLEVEL 1 goto compile

:compile
echo[
echo ---------------------------------------------
echo[
call start tcc\tcc.exe %source%

echo		Compile finish!
echo[
echo ---------------------------------------------
echo[
choice /c ce /n /m "Would you like to [C]ompile again, or [E]xit? "
if ERRORLEVEL 2 goto exit
if ERRORLEVEL 1 goto main
:exit
exit
