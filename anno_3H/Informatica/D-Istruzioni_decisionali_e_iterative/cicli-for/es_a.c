/*
 *crivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori. 
 * @author Samuele Poli, 3H
 * @date 25/11/24
 * 
 * input: numero da tastiera intero
 *elaborazione: divisori del numero
 *output: stampato a schermo i divisori del numero
 */

#include <stdio.h>
int main()
{
    int num1,contatore;

    printf("inserisci un mumero intero: ");
    scanf("%d", &num1);
    printf("\n");

    for (contatore = 1;contatore <= num1 ;contatore++)
    {
        if (num1 % contatore == 0)
        {
            printf("il divisore sono :%d",contatore);
            printf("\n");
        }
        else
        {

        }
    }
   return 0; 
}