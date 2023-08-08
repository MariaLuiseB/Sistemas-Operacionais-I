#! /bin/bash

printf "Nome do contato:\n"

read nome # nome do contato eh armazenado na variavel nome 

printf "Email:\n"

read email # nome do contato eh armazenado na variavel email

printf "$nome \t\t$email\n" >> contatos.txt 
