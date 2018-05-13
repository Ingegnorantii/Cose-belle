#include <stdio.h>
#include <math.h>

int power(int b,int e);


int main()
{
	int x,y,z,scelta;
	float k;
	
	printf("Inserisci un numero:");
	scanf(" %d",&x);
	printf("Inserisci un numero:");
	scanf(" %d",&y);
	
	printf("Vuoi richiamare la funzione?");
	printf("\n1.Si\n2.No\n");
	scanf("%d",&scelta);
	k=0,1*125;
	if(scelta==1)
	{
		z=power(x,y);
		if(y>=0)
		printf("Risultato: %d",z);
		else
		{
		k=z;	
		printf("Risultato: 1/%d = %f ",z,1/k);
	    }
		
	}
	else
	{
		return 0;
	}
	
	return 0;
}

int power(int b, int e)
{
	if(e==1)
	return b;
	
	if(e<0)
	e=e*(-1);
    
    
	if(e==0)
	{
	return 1;
    }
	else
	{
	  return b*power(b,e-1);
	}
	
}
