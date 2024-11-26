@echo off
echo *** System Information ***
echo Logged-in User: %USERNAME%

for /f "tokens=4-6 delims= " %%i in ('systeminfo ^| find "OS Name"') do echo Operating System: %%i %%j %%k

echo Homepath: %HOMEPATH%
echo Number of Processors: %NUMBER_OF_PROCESSORS%
echo System Drive: %SystemDrive%
echo Processor Architecture: %PROCESSOR_ARCHITECTURE%

echo Search Paths: %PATH%

systeminfo | find "Total Physical Memory"
systeminfo | find "Available Physical Memory"

echo *** Disk Resources ***

wmic logicaldisk get caption, description, size, freespace
