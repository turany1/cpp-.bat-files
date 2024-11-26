@echo off
:menu
echo Menu:
echo a. Show all files in the current directory with a given extension
echo b. Show all subdirectories located in the current directory
echo c. Add your name to each line in file.txt
echo d. End
echo.
set /p choice="Enter your choice (a, b, c): "

if /i "%choice%"=="a" goto option_a
if /i "%choice%"=="b" goto option_b
if /i "%choice%"=="c" goto option_c
if /i "%choice%"=="d" goto end

echo Invalid choice. Please try again.
goto menu

:option_a
set /p extension="Enter the file extension (e.g., txt, jpg, etc.): "
echo Files with extension .%extension% in the current directory:
for %%f in (*.%extension%) do echo %%f
goto menu

:option_b
echo Subdirectories located in the current directory:
for /d %%d in (*) do echo %%d
goto menu

:option_c
echo Adding your name to each line in file.txt...
for /f "tokens=* delims=" %%a in (file.txt) do (
    echo %%a YourName >> newfile.txt
)
echo Completed.
goto menu

:end
