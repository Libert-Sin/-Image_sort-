echo -e "#### 이 프로그램의 저작권은 ⓒLibert Sin 에 있습니다. ####\n 자유로운 배포·수정은 허용하지만 원저작자와 출처를 표시해야 합니다.\n http://photoguraphy.com/\n#############\n\n\n"
@echo off

cd raw
move ..\jpg\*.jpg .\

for /r %%i in (*.cr2) do (
if not exist "%%~ni.jpg" (

echo %%~ni
del "%%i"
)
)

for /r %%i in (*.dng) do (
if not exist "%%~ni.jpg" (

echo %%~ni
del "%%i"
)
)

move *.jpg ..\jpg\

pause