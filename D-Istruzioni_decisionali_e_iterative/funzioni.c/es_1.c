#include<stdio.h>
int area_retangolo(base,altezza);
int main()
{
    int base,altezza,Area;
    printf("inserisci un numero (base)");
    scanf("%d",&base);
    printf("inserisci un numero (altezza)");
    scanf("%d",&altezza);

    Area =area_retangolo(base,altezza);
    
    printf("l'area tra %d e %d e: %d",base,altezza,Area);

    return 0;
}
int area_retangolo(int base,int altezza)
{
    int area;
    area = base * altezza;
    return area;
}


