#!/bin/bash
while [ "risultato" != 10 ]
do
 echo -n -e "inserisci un numero\n" 
 read num1
 echo -n -e "inserisci un numero\n" 
 read num2
 risultato=$((num1+num2))

done 
 echo "Il risultato è: $risultato" 
