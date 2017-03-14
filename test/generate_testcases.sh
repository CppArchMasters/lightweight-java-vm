#!/bin/bash

while read line; do

oldfile=test_xx.c
newfile="test_$NUM"
size=${#line}       # get size of the input string
size=$((size+1))    # add one to be c compliant

sed 's/$line/$PATTERN/g' $oldfile > $newfile
sed 's/INLEN/$size/g' -i $newfile

echo "void testCalculation_$NUM(void);" >> test_xx.h

done <inputs.txt
