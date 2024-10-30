#include <stdio.h>
int main ()
{
     int spesa;
    printf("inserisci l'importo della spesa");
    scanf("%d", &spesa);
    if(spesa>50)
    {
        if(spesa>100)
        {
            spesa=(spesa-(spesa * 10/100));
            printf("sconto del 10 percento importo da pagare e: %d",  spesa);
            printf("\n");
        }
        else
        { 
            spesa=(spesa-(spesa * 5/100));
            printf("importo da pagare=%d",  spesa);
        }
    }    
    else
    {
      printf("nesuno sconto aplicabile al importo da pagare e: %d", spesa);
    }       
    
    return 0;    
}