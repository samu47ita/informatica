#include<stdio.h>
int MCD(num1,num2);
int main()
{
    int a,b,r;
    printf("inserisci due numeri interi\n");
    scanf("%d %d",&a,&b);
    r=MCD(a,b);
    
}
int MCD (int x,int y)
{
    while (x!=y)
    {
     if (x>1)
     {
        {x=x-y;}
     }
      else
      {
         {y=y-x;} 
      } 
      
     
           
    }
return x;    
}