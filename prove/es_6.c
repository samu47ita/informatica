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

    printf("il valore di a e %d \n",a);
    printf("il valore di b  e %d \n",b);
    

    return 0;
}

void schambio(int *x,int *y)
{
    int aux;
    aux =*x;
    *x=*y;
    *y=aux;
}