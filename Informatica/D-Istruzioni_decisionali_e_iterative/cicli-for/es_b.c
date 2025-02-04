/*
 *Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
 * @author Samuele Poli, 3H
 * @date 27/11/24
 * 
 * input: numero da tastiera intero
 *elaborazione: 
 *output: 
 */
#include <stdio.h>
int main()
{
    int div1,div2;
    printf("le coppie ordinate di numeri naturali la cui somma è 15: \n");

    for (div1 = 0;div1 <= 15;div1 ++)
    {
        for (div2 = 0; div2 <= 15; div2 ++) 
        {
           if (div1 + div2 == 15)
           {
            printf("%d, %d",div1,div2);
            printf("\n");
           }
           
        }
        
    }

return 0;    
}