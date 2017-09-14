title Batch Kit
color 1a
echo off
cls
mkdir %ComputerName%\Docs
goto splash

:splash
cls
echo[
echo ===============================================================================
echo[
echo      BBBBBBBB        AAA     TTTTTTTTTT    KK    KK  IIIIIIII  TTTTTTTTTT
echo      BB    BB     AA     AA      TT        KK  KK       II         TT
echo      BB    BB     AA     AA      TT        KKKK         II         TT
echo      BBBBBBBBBB   AAAAAAAAA      TT    ==  KKKKK        II         TT
echo      BB      BB   AA     AA      TT    ==  KK  KK       II         TT
echo      BB      BB   AA     AA      TT        KK   KK      II         TT
echo   O  BBBBBBBBBB   AA     AA      TT        KK    KK  IIIIIIII      TT
echo[
echo ===============================================================================
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
echo ===============================================================================
echo[
echo        Menu:
echo            1.) Get WLAN Information     2.) Unhide files from 
echo                                                   "shortcut virus"
echo[
echo            3.) Hide imperative drive files   4.) Crawl local documents
echo[
echo            0.) Exit
echo[
echo ===============================================================================
echo[
choice /c 01234 /n /m "Enter option: "

if ERRORLEVEL 5 goto four
if ERRORLEVEL 4 goto three
if ERRORLEVEL 3 goto two
if ERRORLEVEL 2 goto one
if ERRORLEVEL 1 goto exit

:one
cls
echo[
echo ===============================================================================
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
call netsh wlan show profile * key=clear >> %ComputerName%\netinfo.txt

echo    Network Information collected.
echo    Output logged to "%ComputerName%\netinfo.txt"
echo[
goto choice

:two
cls
echo[
echo ===============================================================================
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
goto choice

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
goto choice

:four
cls
echo[
echo ===============================================================================
echo[
echo    Document(s) Crawler Script
echo     - Crawls the computer for documents in usually used
echo     folders.
echo     - Copies the documents to a new folder named with the
echo     machine name.
echo[
echo --------------------------------------
echo[
choice /c yn /n /m "Do you want to continue? [Y/N]: "
echo[
if ERRORLEVEL 2 goto menu
if ERRORLEVEL 1 goto four-next
if ERRORLEVEL 0 goto menu

:four-next
call xcopy %UserProfile%\Documents\*doc* /y %ComputerName%\Docs >> %ComputerName%\docs_log.txt
call xcopy %UserProfile%\Desktop\*doc* /y %ComputerName%\Docs >> %ComputerName%\docs_log.txt
call xcopy %UserProfile%\Downloads\*doc* /y %ComputerName%\Docs >> %ComputerName%\docs_log.txt

echo[
echo    Documents collected.
echo    Output copied and logged to "%ComputerName%\Docs"
echo[
goto choice

:choice
choice /c:sme /n /m "Do you want to go to [S]plash, [M]enu, or [E]xit?"

if ERRORLEVEL 3 goto exit
if ERRORLEVEL 2 goto menu
if ERRORLEVEL 1 goto splash
if ERRORLEVEL 0 goto exit

:exit
exit
