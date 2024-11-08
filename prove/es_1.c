#include <stdio.h>

int main ()
{
    int max,min,num;
    printf("inserisci dei numeri \n");
    do
    {
        scanf("%d", &num);
        if (num>max)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
        
    } while (num != 0);

    printf("il magiore e' :%d", max );
    printf("\n");
    printf("il minore e' :%d", min);
    printf("\n");

    return 0;
}