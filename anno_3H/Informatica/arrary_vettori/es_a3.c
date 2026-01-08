#include<stdio.h>

 int ricerca(int V[],int num);
 void stampa_array(int V[]);
 int ricerca_bin (int vet[],int first,int last,int el);

 #define N 15

 int main()
{
    int vet[N];
    int num;
    int trovato;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        vet[i] = rand() % 21;
    }

    printf("inserire un numero da cercare tra (1/20): ");
    scanf("%d",&num);

    trovato = ricerca(vet,num);

    if (trovato == -1)
    {
        printf("il numero %d non c'e \n", num);
    }
    else
    {
        printf("il numero cercato si trova nella casella di indice %d " , trovato);
        printf("\n");
    }

    stampa_array(vet);

    

    return 0;
}

  int ricerca(int V[],int num)
  {
    for (int i = 0; i < N; i++)
     {
       if (V[i] == num)
         {
            i++;
            return i;
         }
       
     }
    return -1;
  }

 void stampa_array(int V[])
    { 
        for (int i = 0; i < N; i++)
        {
         printf("%d ",V[i]);
         printf("\n");
        }
    
    }
 
int ricerca_bin (int vet[],int first,int last,int el)
{
    int med;
    if (first > last)
        return -1;
    else
    {
        med =(first + last) /2;
        if (el == vet[med])
        {
            return med;
        }
        else
        {
            if (el>vet[med])
            {
                return ricerca_bin (vet,med+1,last,el);
            }
            else
            {
                return ricerca_bin (vet,first,med-1,el);
            }
        }
 
    }    

}    