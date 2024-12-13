/*
 * letti 10 interi da tastiera li visualizzi tutti e stampi la loro somma 
 * @author Samuele Poli, 3H
 * @date 11/12/24
 * 
 * input:10 numeri da tastiera interi
 *elaborazione: somma dei numeri
 *output: stampato a schermo la somma dei numeri
 */
#include <stdio.h>
int main()
{
    int num,cont,somma;
    somma=0;
    printf("inserisci 10 numeri interi \n");
    for (cont=0;cont<10;cont++)
    {
        scanf("%d",&num);
        somma+=num;
    }
    printf("somma = %d \n",somma);
    return 0;
}