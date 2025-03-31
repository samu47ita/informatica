#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define R 5
#define C 5

void stampa_random(int m[][C],int r,int c);

int main ()
{
    int mat[R][C];

    srand(time(NULL));
    
    for(int i=0; i<R; i++)
    {
        for (int j = 0; j < C; j++)
        {
           mat[i][j] = rand() % 11;
        }
        
    }

    stampa_random(mat,R,C);

}

void stampa_random(int m[][C],int r,int c)
{
    for(int i=0; i<R; i++)
    {
        for (int j = 0; j < C; j++)
        {
           printf("%d \t", m[i][j]);
        }
        printf("\n");
        
    }
  
}



