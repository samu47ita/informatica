/*
 *Scrivere un programma in C che chiesti 2 numeri interi all’utente,
 * stampi sul monitor tutti i numeri compresi fra i 2 interi.
 *  Es. se i numeri inseriti sono 4 e 12 stampare 4,5,6,7,8,9,10,11,12.
 *
 * @author Samuele Poli, 3H
 * @date 13/11/24
 */

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("inserisci due numeri interi :\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("i numeri sono:\n");
    if(num1>num2)
    {
        printf("%d\n",num1);
        do
        {
          num1--;
          printf("%d\n",num1); 
        } while (num1 != num2);  
    }
    else
    {
        printf("%d\n", num2);
        do
        {
            num2--;
            printf("%d\n",num2);
        } while (num2!=num1);
        
    }
    
return 0;
}