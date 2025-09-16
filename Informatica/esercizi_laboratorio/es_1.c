#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define r 10
#define c 20

void carica_random(int n[][c]);
void stampa_matrice(int n[][c]);
int cont_nprimi(int x);

int main()
{
    int matrice [r][c];

    carica_random(matrice);
    stampa_matrice(matrice);

    return 0;
}


void carica_random(int n[][c])
{
    int i,j;
    srand (time(NULL));
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            n[i][j] = rand() %16 +10;
        }
        
    }
    
}
void stampa_matrice(int n[][c])
{
     int i,j;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d \t", n[i][j]);
        }
       printf("\n"); 
    }

}

int cont_nprimi(int x)
{


}
