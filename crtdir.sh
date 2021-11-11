#!bin/sh


ls -l  | grep -i "Ch" > temp.dat
lastCh=0
while IFS=' ' read -ra files; do
  for i in "${files[8]}"; do
    num="${i: 2}"
    if test $num -ge $lastCh;then
    	lastCh=$num
    fi
  done
done < temp.dat
nextDirName="Ch$(($lastCh + 1))"
mkdir $nextDirName;
if [ -f "temp.dat" ]; then
	rm -rf temp.dat
fi