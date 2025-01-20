#include<stdio.h>
float media (int,int);
int main ()
{
    int a,b;
    float ris;

    printf("inserisciun nuero intero");
    scanf("%d",&a);
    printf("inserisci un secondo numero intero");
    scanf("%d",&b);

    ris = media (a,b);

    printf("la media tra : %d e %d %.1f ",a,b, ris); 
    return 0;
}

float media(int x,int y)
{
    float M;
    M=(float)( x + y)/2;
    return M;
}
