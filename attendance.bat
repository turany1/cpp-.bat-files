@echo off
set /p current="Enter the number of students present in the class: "
set /p exercise="Enter the number of students in the exercise group: "
set /p previous="Enter the number of students in the class previously: "

set /a absent=%previous% - %current%
set /a current_percentage=(%current% * 100) / %exercise%
set /a total_students=%current% + %previous%
set /a average_percentage=((%current% + %previous%) * 100) / (2 * %exercise%)

echo Number of students in the group: %exercise%
echo Number of current students: %current%
echo Number of previously current students: %previous%
echo Number of absent (currently) students: %absent%
echo Current turnout in %%: %current_percentage%%
echo Average turnout (together current and previous) in %%: %average_percentage%%
