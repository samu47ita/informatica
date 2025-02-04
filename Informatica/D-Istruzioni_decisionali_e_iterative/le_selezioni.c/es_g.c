/*
autore: Samuele poli
Classe: 3^H
data: 04/11/2024
letto un carattere da tastiera visualizzare a schermo il carattere e i corrispondenti codici ascii in decimale e esadecimale

input: caratere da tastiera
elaborazione: codice ascii in decimale è esadecimale
output: stampare schermo il carattere e i corrispondenti codici ascii in decimale e esadecimale
*/

# include <stdio.h>

int main()
{
    char carattere;

    printf("inserisci un carattere: ");
    scanf("%c", &carattere );
    printf("\n");

    printf("il caratere inserito e' dec=%d, esad=%x, char=%c \n", carattere, carattere, carattere);
    
    return 0;
}