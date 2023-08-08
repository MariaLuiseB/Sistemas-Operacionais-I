#!/bin/bash

printf "Dec\tHex\tOct\n"
for i in {1..32}
do
    printf "%d\t%x\t%o\n" $i $i $i 
done
