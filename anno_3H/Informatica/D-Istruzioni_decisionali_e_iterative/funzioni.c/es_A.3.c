/*
*autore: Samuele poli
*Classe: 3^H
*data: 05/02/2025
*somma divisori che prende in input un numero intero e restituisce la somma dei suoi divisori.
*
*/
#include<stdio.h>
int somma_divisori(int X);
int main ()
{
    int num1,risultato;
    printf("inserisci un numero: ");
    scanf("%d",&num1);

    risultato=somma_divisori(num1);

    printf("il risultato della somma dei divisori e:%d \n",risultato);


    return 0;
}
int somma_divisori(int x)
{
    int contatore,ris,somma=0;
    
    for (contatore = 1;contatore <= x ;contatore++)
    {
        if (x % contatore == 0)
        {
            ris=somma += contatore;
        }
        
    }

    return ris;
}