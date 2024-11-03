#include <stdio.h>

int main()
{
    
    int media, crediti,voto_finale ;
    printf("inserisci la media dello studente (valore intero): ");
    scanf("%d", & media);

    printf("iserisci i crediti dello studente: ");
    scanf("%d", &crediti);

    voto_finale = media;

    if (media >= 28 && crediti >24)
    {
        voto_finale += 2 ;
    }
        else  if (media >= 25 && media <= 27 && crediti >= 18 && crediti<= 24 ) 
    {
        voto_finale + 1;
    }
    printf("media iniziale: %d \n", media );
    printf("crediti otenuti: %d \n", crediti);
    printf("voto finale: %d \n", voto_finale);

    return 0;
}