#include <stdio.h>

int main ()
{
    int c, count = 0, media = 0, sum;
    
   do
   {	
       do
       {
          printf("Inserisci un valore, inserisci zero per terminare:\n");
          scanf("%d",&c);
       } while(c<0);
       
      count=count+1;
      sum=sum+c;
      
   } while(c>0);
       
       media=sum/(count-1);
       printf("La media è: %d ",media);


return 0;
}
  
