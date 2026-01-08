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
 * 1. Utilizzare un generatore di numeri casuali per posizionare la nave
 * 2. La nave deve avere una lunghezza di 3 caselle (definita come costante)
 * 3. Implementare due modalità di posizionamento: orizzontale e verticale
 * 4. Garantire che la nave sia sempre completamente all'interno del campo
 * 5. Visualizzare il campo con la possibilità di mostrare o nascondere la nave
 * 6. La nave è rappresentata dal carattere '#' nella matrice
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