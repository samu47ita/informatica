#include <stdio.h>

int main() {
    char carattere;

    printf("Inserisci una lettera: ");
    scanf("%c", &carattere);
 
    switch (carattere) {
        case 'l':
        case 'L':
            printf("Lunedì\n");
            break;
        case 'm':
        case 'M':
            printf("Martedì\n");
            break;
        case 'w':
        case 'W':
            printf("Mercoledì\n");
            break;
        case 'g':
        case 'G':
            printf("Giovedì\n");
            break;
        case 'v':
        case 'V':
            printf("Venerdì\n");
            break;
        case 's':
        case 'S':
            printf("Sabato\nDomenica\n");
            break;
        case 'd':
        case 'D':
            printf("Domenica\n");
            break;
        default:
            printf("Nessun giorno\n");
            break;
    }

    return 0;
}