#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void stampa_array(int V[]);
void istogramma(int V[]);


#define N 10

int main()
{
    int vet[N];


    srand(time(NULL));
    
    for (int i = 0; i < N; i++)
    {
        vet[i] = rand() % 20;
    }

}
void istogramma(int V[])
{
    for(int i = 0; i < N; i++)
    {
        printf("%d:",V[i]);
         
    }
}




void stampa_array(int V[])
{ 
    for (int i = 0; i < N; i++)
    {
     printf("%d ",V[i]);
     printf("\n");
    }

}
