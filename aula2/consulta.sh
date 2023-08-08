#! /bin/bash

printf "Consulta: "

read nome 

grep -i "$nome" contatos.txt