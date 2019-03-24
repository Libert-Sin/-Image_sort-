#!/bin/sh


echo "#### 이 프로그램의 저작권은 ⓒLibert Sin 에 있습니다. ####\n 자유로운 배포·수정은 허용하지만 원저작자와 출처를 표시해야 합니다.\n http://photoguraphy.com/\n#############\n\n\n"

mkdir raw
mkdir jpg

mv -rfv *.PEF ./raw
mv -rfv *.pef ./raw
mv -rfv *.DNG ./raw
mv -rfv *.dng ./raw
mv -rfv *.cr2 ./raw
mv -rfv *.CR2 ./raw

mv -rfv *.JPG ./jpg
mv -rfv *jpg ./jpg
mv -rfv *.JPEG ./jpg
mv -rfv *.jpeg ./jpg
