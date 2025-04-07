/**
 * @file es_battaglia_navale_1.c
 * @brief Battaglia Navale - Step 1: Inizializzazione e visualizzazione del campo di gioco
 * @author Samuele poli
 * @version 2.0 07/04/25 Versione iniziale
 * 
 * @details
 * OBIETTIVO DELL'ESERCIZIO:
 * Creare la base del gioco Battaglia Navale, implementando le funzioni
 * necessarie per inizializzare e visualizzare il campo di gioco.
 * 
 * ANALISI DEI REQUISITI:
 * 1. Creare una matrice di dimensione 5x5 per rappresentare il campo di gioco
 * 2. Inizializzare la matrice con il carattere '~' che rappresenta l'acqua
 * 3. Visualizzare il campo di gioco con indici di riga e colonna
 * 4. Utilizzare una struttura modulare con funzioni separate per inizializzazione e visualizzazione
 */
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define LUNGHEZZA_NAVE 3
#define DIMENSIONE 5
void inizializzaCampo(char campo[][DIMENSIONE]);
void visualizzaCampo(char campo[][DIMENSIONE], int mostraNave); 
void posizionaNave(char campo[][DIMENSIONE]);

int main()
{
    char campo[DIMENSIONE][DIMENSIONE];
     
    inizializzaCampo(campo);
    visualizzaCampo(campo,0);
    
}

void inizializzaCampo(char campo[][DIMENSIONE]) 
{
    // Implementare la funzione per inizializzare il campo

    for (int i = 0; i < DIMENSIONE; i++)
    {
        for (int j = 0; j < DIMENSIONE; j++)
        {
            campo[i][j] = '~' ;
        }

    }
}

void visualizzaCampo(char campo[][DIMENSIONE], int mostraNave) 
{
    // Implementare la funzione per visualizzare il campo

    for (int i = 0; i < DIMENSIONE; i++)
    {
        for (int j = 0; j < DIMENSIONE; j++)
        {
            printf("%c \t",campo[i][j]);
        }
        printf("\n");
    }

}
void posizionaNave(char campo[][DIMENSIONE])
{
    // Implementare la funzione per posizionare la nave casualmente
    int poisine;

    srand(time(NULL));
    rand () % 2 ;
    if(poisine == 1)
    {
        
    }

}