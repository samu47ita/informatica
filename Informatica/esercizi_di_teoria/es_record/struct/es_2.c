#include<stdio.h>

#define n 20



struct data
{
    int  gg ; 
    int  mes;
    int  anno;
} typedef data;

struct nascita
{
    char cognome [n];
    char nome[n];
    data nascita;
}typedef nascita;

struct persona
{
    nascita persona ;
    int voti[10];
}typedef persona;

void caricatabella(persona s[]);

int main()
{
    
}

void caricatabella(persona s[]) 
{

    for (int i = 0; i < 10; i++)
    {
        printf("inserisci il cognome : \n");

    }



}



