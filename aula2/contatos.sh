#!/bin/bash

clear 

while (true)

do

printf "Gerenciador de contatos V1b \n"

stats=$(wc -l < contatos.txt)

printf "Você tem %d contatos na sua agenda.\n " $stats 

printf "O que deseja fazer?\n"

printf "1 - Consultar um contato.\n"

printf "2 - Inserir um contato.\n"

printf "3 - Sair.\n"

read opcao

case $opcao in

1) ./consulta.sh ;;

2) ./novo.sh ;; 

3) exit ;; 

*) prinft "Opção Inválida\n" ;;

esac 

done 