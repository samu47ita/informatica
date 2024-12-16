/*  
 * @author Samuele Poli, 3H
 * @date 13/12/24
 * 
 * esercizio:scrivere un programma che calcoli il fattoriale di un numero intero N positivo dato dalla tastiera
 * 
 * input:letto un numero intero da tastiera 
 *elaborazione:calcolo del fatoriale
 *output: risultato del fatoriale
 */

#include <stdio.h>

int main()
{

    int n,fattoriale,cont;
    fattoriale=1;

    printf("inserisci un numero intero positivo\n");
    scanf("%d",&n);

    for (cont = 1;cont <= n ;cont++)
    {
        fattoriale *= cont;
    }
    printf("il fattorile di %d è:%d \n",n,fattoriale);

return 0;

}