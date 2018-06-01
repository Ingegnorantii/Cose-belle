#include <stdio.h>

void Search(int , int );

int main()
{
   int num,num1;
    
   printf("Inserisci l'intervallo (Minimo/Massimo): ");
   scanf("\n%d ", &num);
   scanf("\n%d", &num1);
    
   Search(num,num1);
 
    return 0;
    
}


void Search(int a, int b)
{	
    int t = 2, y;
    int s;
    int counter=0;
    while(t == 2)
    {
    	y=(b+a)/2;
		printf("\nIl numero e' %d?\n",y);
    	printf("1.Si \n2.No\n");
        scanf("\n%d", &t);    
        
        if (t==1)
        break;
        
        printf("\nPrima di %d?\n",y);
        printf("1.Si \n 2.No\n");
		scanf("\n%d",&s);
        
        if(s==1)
            
            b = (b + a)/2;
        
        else
            
            a = (b + a)/2;
        counter +=1;
        
		if(counter==5)
        {
        printf("Porcodio ho perso");
        return;
        }
    }
    
    printf("\nHo Vintooooo xdxdxdxd!111");
    return;
}
