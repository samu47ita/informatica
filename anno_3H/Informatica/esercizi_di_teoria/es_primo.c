#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void stampa_array(int V[]);
int conta_primo(int V[]);
int numero_primo(int X);
#define N 10


int main()
{
    int vet[N];
    int r;

    srand(time(NULL));
    
    for (int i = 0; i < N; i++)
    {
        vet[i] = rand() % 21;
    }

    r=conta_primo(vet);

    printf("all interrno del vetore ci sono %d numeri primi\n",r); 

    stampa_array(vet);    


}

void stampa_array(int V[])
{ 
        for (int i = 0; i < N; i++)
        {
         printf("%d ",V[i]);
         printf("\n");
        }
    
}

int numero_primo(int X)
{
    int cont=0;
    for (int i = 2; i < X; i++)
    {
        if (X % i == 0)
        {
            cont++;
        }
    }
    if (cont==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int conta_primo(int V[])
{
    int cont = 0,r = 0 ;
    for(int i=0;i<N;i++)
    {
        cont=numero_primo(V[i]);
        if(cont==1)
        {
            r++;
        }
    }
   return r; 
}