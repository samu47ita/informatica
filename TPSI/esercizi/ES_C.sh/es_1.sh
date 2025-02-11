#!/bin/bash

read -p "Inserisci il tuo nome : " nome
read -p "Inserisci la tua password: " -s password

if [ $password = "123" ] && [ $nome = "samuele" ]

then
    
    echo "il nome utente e giusto e"
    echo "la password e giusta"
    

else 
    echo "il nome utente e sbagliato"

    echo "la password e sbagliata" 
fi



