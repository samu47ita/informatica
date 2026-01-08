#include<stdio.h>

int main()
{
    int s,c,num;
    s=0;
    c=0;
    do
    {
       printf("inserisci nuneri interi : ");
       scanf("%d", &num);
       s=s+num;  
       c=c+1;
    } while (c<10);
    printf("la somma e uguale a: %d ",s);
    printf("\n");
 
    return 0;
    
}