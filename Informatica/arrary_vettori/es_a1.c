/* @brief dichiari un array di 10 interi 
 * @param vetore
 * @param costante N
 *  
 * @author Samuele Poli, 3H
 * @date 10/03/25
*/
#include<stdio.h>

#define N 10


int main()
{
    
    int vet[N] = {1,2,3,4,5,6,7,8,9,10};

    for(int cont =0; cont < N; cont ++ )
    {
        printf("i numeri inseriti sono: %d", vet[cont]);
        printf("\n");
    }
return 0;
}
