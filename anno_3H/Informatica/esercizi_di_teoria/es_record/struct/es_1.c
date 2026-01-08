#include<stdio.h>


#define n 10

struct es_1
{
    char cognome [n];

    char nome [n];

    int voti[8];
  
}typedef es_1;

int main()
{
    int numero,i ;
    es_1 s1,s2;

    for ( i = 0; i < 8; i++)
    {
        printf("inserisci un voto (da 2 a 10) : ");

        scanf("%d", &s1.voti[i] );
    }
    





}
