#include<stdio.h>

int main()
{
    int num,media,contatore,somma;
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
    printf("media =%d", media);
    printf("\n");
    printf("somma : %d", somma);
    printf("\n");

    return 0;    
}