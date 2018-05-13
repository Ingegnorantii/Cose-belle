#include <stdio.h>

void fibo (int);

int main()
{
	
	int x;
	
	printf("Inserisci il numero: ");
	scanf("%d",&x);
	
	fibo(x);
	return 0;
	
}

void fibo(int n)
{
	int i,a=0,b=1,c,d;
	
	printf("%d %d",a,b);
	for(i=0;i<n-2;i++)
	{
		
		c=a+b;
		if(c<n)
		printf(" %d",c);
		
		if((c==n)||((b<n)&&(c>n)))
		{
		printf("\n(%d)+(%d)=%d\n",d,a,b);
		break;
	    }
		
		d=a;
		a=b;
		b=c;
		
		
	}
}
