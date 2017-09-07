title Batch Kit
color 1a
echo off
cls
goto splash

:splash
cls
echo[
echo =============================================================================
echo[
echo      BBBBBBBB        AAA     TTTTTTTTTT    KK    KK  IIIIIIII  TTTTTTTTTT
echo      BB    BB     AA     AA      TT        KK  KK       II         TT
echo      BB    BB     AA     AA      TT        KKKK         II         TT
echo      BBBBBBBBBB   AAAAAAAAA      TT    ==  KKKKK        II         TT
echo      BB      BB   AA     AA      TT    ==  KK  KK       II         TT
echo      BB      BB   AA     AA      TT        KK   KK      II         TT
echo   O  BBBBBBBBBB   AA     AA      TT        KK    KK  IIIIIIII      TT
echo[
echo =============================================================================
echo[
echo[                   by GrenadeSpamr
echo[
goto pause
:pause
echo                    (Press any key)
pause >nul
cls
goto menu

:menu
cls
echo[
echo =============================================================================
echo[
echo        Menu:
echo            1.) Get WLAN Information     2.) Unhide files from 
echo            3.) Hide imperative drive files           "shortcut virus"
echo[
echo            0.) Exit
echo[
echo =============================================================================
echo[
choice /c 0123 /n /m "Enter option: "

if ERRORLEVEL 4 goto three
if ERRORLEVEL 3 goto two
if ERRORLEVEL 2 goto one
if ERRORLEVEL 1 goto exit

:one
cls
echo[
echo =============================================================================
echo[
echo    WLAN Information Gathering Script
echo    - Gathers the wireless information from the computer.
echo    - Retrieves the pass-key for the current active connection.
echo    - Gathered information is logged/appended to "netinfo.txt"
echo[
echo --------------------------------------
echo[
choice /c yn /n /m "Do you want to continue? [Y/N]: "
echo[
if ERRORLEVEL 2 goto menu
if ERRORLEVEL 1 goto one-next
if ERRORLEVEL 0 goto menu

:one-next
echo --------------------------------------
echo[
call netsh wlan show network >> netinfo.txt
call netsh wlan show profile * key=clear >> netinfo.txt

echo    Network Information collected.
echo    Output logged to "netinfo.txt"
echo[
choice /c sme /n /m "Do you want to go to [S]plash, [M]enu, or [E]xit?"

if ERRORLEVEL 3 goto exit
if ERRORLEVEL 2 goto menu
if ERRORLEVEL 1 goto splash
if ERRORLEVEL 0 goto exit

:mute-one
call netsh wlan show network >> netinfo.txt
call netsh wlan show profile * key=clear > netinfo.txt
exit

:two
cls
echo[
echo ==============================================================================
echo[
echo    File Unhide from "Shortcut Virus" Script
echo    - Removes the system, hide, and read-only attributes in all
echo    files from the given drive.
echo[
echo --------------------------------------
echo[
set /p drive= "Enter drive letter: "
echo COMMAND IS USELESS IF INPUT IS NOT AN EXISTING DRIVE!
echo[

call cd %drive%:\
call attrib *.* -s -h -r /s /d 

echo    Files revealed from "shortcut virus" in Drive %drive%
echo[
echo --------------------------------------
echo[
choice /c:sme /n /m "Do you want to go to [S]plash, [M]enu, or [E]xit?"

if ERRORLEVEL 3 goto exit
if ERRORLEVEL 2 goto menu
if ERRORLEVEL 1 goto splash
if ERRORLEVEL 0 goto exit

:three
cls
echo[
echo ===============================================================================
echo[
echo    Drive Imperative File Hiding Script
echo     - Hides significant files like "autorun.inf" and other
echo     files usually hidden in a drive.
echo     - Useful after using the file unhide script
echo[
echo --------------------------------------
echo[
set /p drive= "Enter drive letter: "
echo COMMAND IS USELESS IF INPUT IS NOT AN EXISTING DRIVE!
echo[

call cd %drive%:\
call attrib autorun.inf* +s +h +r
call attrib "System Volume Information" +s +h +r /s /d

echo    Finished hiding imperative files on Drive %drive%
echo[
echo --------------------------------------
echo[
choice /c:sme /n /m "Do you want to go to [S]plash, [M]enu, or [E]xit?"

if ERRORLEVEL 3 goto exit
if ERRORLEVEL 2 goto menu
if ERRORLEVEL 1 goto splash
if ERRORLEVEL 0 goto exit

:exit
exit
