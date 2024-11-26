@echo off
set "folder=C:\Surename_Name"
set "responseFile=%folder%\Surename_Name.docx"

if not exist "%folder%" (
    echo Creating folder %folder%...
    mkdir "%folder%"
)

if exist "%responseFile%" (
    echo Response file found in %responseFile%
    REM Run task1.bat file
    task1.bat
) else (
    echo Response file not found in %responseFile%
    echo Please make sure the response file exists.
)

