#include <stdio.h>

#define SIZE 1000

void Eratostene(int v[]);

int main()
{
    int i, vettore[SIZE] = {1};
    vettore[0] = 0;
    vettore[1] = 0;

	for(i=2;i<SIZE;i++)
    {
    	vettore[i]=1;
	}
    Eratostene(vettore);

    return 0;
}

void Eratostene(int v[])
{
    int i,j;
   
   for(i = 2; i < SIZE; i++)
    {
        j = i;

            while(( i+j) < 1000)
        {
        	
         if(v[i] == 0)
       
         break;

         v[i+j] = 0;
         j=i+j;

      }
    }
 
    for(i = 0; i < SIZE; i++)
    {
        if(v[i] == 1)

            printf(" %d ", i);
    }
    return;
}
