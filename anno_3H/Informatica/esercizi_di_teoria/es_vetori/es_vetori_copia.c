#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 50

void carica_random(int V[]);
void stampa_array(int V[]);
void copia_array(int V[],int V2[],int V3[]);
int main()
{
    int vet1 [N], vet2 [N], vet3 [N];

    carica_random(vet1);

    stampa_array(vet1);
    
    return 0;
}

void carica_random(int V[])
{

    srand(time(NULL));
    
    for (int i = 0; i < N; i++)
    {
       V[i] = ((float)rand() / RAND_MAX)* 41 -21;
    }

}
void stampa_array(int V[])
{
    for (int  i = 0; i < N; i++)
    {
        printf("%d",V[i]);
        printf("\n");
    }
    
}
void copia_array(int V[],int V2[],int V3[])
{
    
}