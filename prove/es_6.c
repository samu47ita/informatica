#include<stdio.h>
void schambio (int *x,int *y);

int main ()
{
    int a,b;

    printf("inserisci un nuero intero\n");
    scanf("%d",&a);
    printf("inserisci un secondo numero intero\n");
    scanf("%d",&b);

    schambio(&a,&b);

    printf("il valore di a e: %d ",a);
    printf("il valore di b  e: %d",b);
    

    return 0;
}

void schambio(int *x,int *y)
{
    int aux;
    aux =*x;
    *x=*y;
    *y=aux;
}