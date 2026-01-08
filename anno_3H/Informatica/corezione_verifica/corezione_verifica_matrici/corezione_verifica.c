#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

void caricarandom_vet(int V[]);
void stampa_vet(int V[]);
int main()
{
    int vet[N];

    caricarandom_vet(vet);
    stampa_vet(vet);
    return 0;
}

void caricarandom_vet(int V[])
{
    int vet[N];
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
       
        vet [i] = rand () %20;

    }
    
}
void stampa_vet(int V[])
{
     for (int i = 0; i < N; i++)
    {
     printf("%d ",V[i]);
     printf("\n");
    }
}