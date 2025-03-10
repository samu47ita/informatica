/* @brief 
 * @param 
 * @param 
 *  
 * @author Samuele Poli, 3H
 * @date 10/03/25
*/
#include<stdio.h>
#define N 10

int main()
{
    float vet[N];
    float somma , media;
    for(int cont =0; cont < N; cont ++ )
    {
        printf("inserisci un numero:");
        scanf("%f",&vet[cont]);

    }


    for(int cont =0; cont < N; cont ++ )
    {
        somma += vet[cont];
    }
    printf("la somma dei numeri é: %.1f \n", somma);
    
    media = somma / N;
    printf("la media dei numeri é: %.1f \n", media);

    return 0;
}