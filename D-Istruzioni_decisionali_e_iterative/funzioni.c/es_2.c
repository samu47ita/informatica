#include<stdio.h>
int MCD(num1,num2);
int main()
{
    int a,b,r;
    printf("inserisci un numero intero \n");
    scanf("%d",&a);
    printf("inserisci un numero intero \n"); 
    scanf("%d",&b);   

    r=MCD(a,b);
    printf("MCD tra %d e %d e: %d \n ",a,b,r);
}
int MCD (x,y)
{   
    
    while (x!=y)
    {
        if (x > y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
           
    }
    return x;
}
