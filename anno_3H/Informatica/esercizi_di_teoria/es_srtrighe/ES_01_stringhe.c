#include<stdio.h>

#define N 100

void leggi_stringha(char str[]);
void stampa_strigha(char str[]);
int conta_strinda(char str[]);

int main()
{
    char str1 [N];int R;
    leggi_stringha(str1);
    printf("\n");   
    stampa_strigha(str1);
    R=conta_strinda(str1);
    printf("\n"); 
    printf("la lungeza della stringa e:%d \n",R );

}

void leggi_stringha(char str[])
{
    char fine= '#';int i=0;
    printf("per finire di scrivere premi %c",fine);
    printf("\n");

    do
    {
        scanf("%c",& str[i]);
        i++;

    } while (str [i-1]!=fine);
    str[i-1]='\0';
    
}
void stampa_strigha(char str[])
{
    int i=0;
    while (str [i] !='\0')
    {
        printf("%c",str [i]);
        i++;
    }
    
}
int conta_strinda(char str[])
{
    int i=0,cont=0;
    while (str [i] !='\0')
    {
       i++;
       cont++;
    }
    return cont;
}