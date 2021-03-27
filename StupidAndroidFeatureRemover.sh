#!/bin/sh
cd src
gcc main.c -v -o SAFR
mv SAFR ../SAFR
cd ..

clear
echo 'Program compiled!'
echo 'Running now...'
sleep 3
clear

sudo chmod 777 SAFR
./SAFR

clear
echo 'Program finished!'
echo 'Running custom made script...'
sleep 5

sudo chmod 777 yourscript.sh
sh yourscript.sh

clear
echo 'Cleaning up... (You can find your custom script in your home directory)'
sleep 3

cp yourscript.sh ~/SAFR_yourscript.sh
rm SAFR yourscript.sh
echo 'Done.'
