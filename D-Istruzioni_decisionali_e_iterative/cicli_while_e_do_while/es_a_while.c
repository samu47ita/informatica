/**
 * scrivere un programma C che visualizzi sul monitor la media 
 * di una sequenza di interi letti da tastiera. La sequenza 
 * termina appena si digita zero 
 * 
 * @author Samuele Poli, 3H
 * @date 11/11/24
 */

#include <stdio.h>

int main()
{
    int num,contatore,somma;
    float media;
    contatore=0;
    somma=0;
     printf("inserisci dei numeri \n");
    do
    {
     scanf("%d", &num);
     somma=somma+num;
     contatore=contatore+1;
     
    } while (num!=0);
    media=somma/contatore;
    printf("media =%.1f", media);
    printf("\n");
    printf("somma : %d", somma);
    printf("\n");

    return 0;    
}