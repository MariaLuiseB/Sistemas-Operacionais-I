#!/bin/bash

cats=("1F638" "1F639" "1F63E" "1F63D" "1F63A")

# printf ${cats[1]} # acessar o conteudo do vetor na posicao 1 


for emoji in "${cats[@]}" # acessar o conteudo de todos os elemetnso do vetor 
do
    printf "\U$emoji"
done