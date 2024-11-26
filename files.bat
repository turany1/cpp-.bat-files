@echo off
setlocal enabledelayedexpansion

set "folder_path=C:\Users\Stepan Turani\Pictures"

dir /s /b "%folder_path%" > files_with_paths.txt

(for /f "tokens=*" %%a in (files_with_paths.txt) do (
    set "line=%%a"
    for %%b in ("!line!") do echo %%~nxb
)) > files_list.txt

echo File names list saved to files_list.txt

del files_with_paths.txt


