#include <stdio.h>

void Pass(int a[]);

int main()
{
	int array[10]={0},i=0;
	
	
	printf("Inserisci 10 numeri\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	
	Pass(array);
	
	
return 0;
}

void Pass(int a[])
{
	int i;
	for(i=0; i<10; i++)
	{
		printf("%d ",a[i]);
	}
	
	return;
}
