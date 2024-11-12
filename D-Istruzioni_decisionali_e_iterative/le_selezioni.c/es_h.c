/*
autore: Samuele poli
Classe: 3^H
data: 04/11/2024
letto un carattere se corrisponde ad una lettera minuscola visualizzare la corrispondente maiuscola; 
se invece è una lettera maiuscola visualizzare la corrispondente minuscola;
 in tutti gli altri casi visualizzare “non è una lettera”;

input: caratere da tastiera
elaborazione: codice ascii in decimale è esadecimale
output: stampare schermo il carattere e i corrispondenti codici ascii in decimale e esadecimale
*/

int main() {
    char carattere;

    printf("Inserisci un carattere: ");
    scanf("%c", &carattere);

    if ((carattere >= 'a' && carattere <= 'z') || (carattere >= 'A' && carattere <= 'Z')) {
       
        if (carattere >= 'a' && carattere <= 'z') {
            printf("%c\n", carattere - 'a' + 'A');
        }
       
        else if (carattere >= 'A' && carattere <= 'Z') {
            printf("%c\n", carattere - 'A' + 'a');
        }
    } else {
       
        printf("Non è una lettera\n");
       }

    return 0;
}    