@echo off
cd /d "C:\Users\Ayush Bhatt\DSA.cpp"

:: Get today's date in YYYY-MM-DD format for matching commit messages
for /f "tokens=1-3 delims=/" %%a in ('date /t') do set today=%%c-%%a-%%b

:: Check if a commit with today's date message already exists
git log --since=midnight --pretty=format:"%%s" | findstr /c:"DSA update: %today%" >nul
if %errorlevel%==0 (
    echo Commit for today (%today%) already exists. Skipping commit.
) else (
    echo %date% %time% >> daily_log.txt
    git add .
    git commit -m "DSA update: %today%"
    git push
)

pause
