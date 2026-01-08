#!/bin/bash

read -p "Inserisci il tuo nome : " nome
read -p "Inserisci la tua password: " -s password

if [ $password = "123" ] && [ $nome = "samuele" ]

then
    
    echo -e "\nil nome utente corisponde e "
    echo "la password e giusta"
    

else 
    echo -e "\nil nome utente e sbagliato o"

    echo "la password e sbagliata" 
fi



