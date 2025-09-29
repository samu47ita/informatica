#include<stdio.h>

#define n 20

void caricatabella(persona s[]);

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
    int voti[n];
}typedef persona;

int main()
{
    
}

void caricatabella(persona s[]) 
{
    for (int i = 0; i < n; i++)
    {


    }
    



}



