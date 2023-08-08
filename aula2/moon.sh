#!/bin/bash

moon=("1F311" "1F312" "1F313" "1F314" "1F315" "1F316" "1F317" "1F318" "1F319")

while (true) # loop para imprimir pra sempre
do 

    for moon in "${moon[@]}" 
    do
        printf "\r\U$moon"
        sleep 0.2
    done
done 