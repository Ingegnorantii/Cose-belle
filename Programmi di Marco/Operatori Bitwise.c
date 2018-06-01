#include <stdio.h>

void BIN(unsigned int);
void AND(unsigned int,unsigned int);
void OR(unsigned int,unsigned int);
void XOR(unsigned int,unsigned int);
void COM(unsigned int,unsigned int);

int main()
{
	unsigned int  num, num1;
	
	printf("Inserisci il primo Numero: ");
	scanf("%d",&num);
	printf("Inserisci il Secondo Numero: ");
	scanf("%d",&num1);
    
    printf("%d)",num);
	BIN(num);
    printf("%d)",num1);
	BIN(num1);
    AND(num,num1);
    OR(num,num1);
    XOR(num,num1);
    COM(num,num1);
	return 0;

}

void BIN(unsigned int a)
{
	int i;
	unsigned int mask;
	mask=1<<31;
	for(i=0;i<=31;i++)
	{
		
		if((a&mask)==0)
		{
			printf("0 ");
		}
		else
		printf("1 ");
		if(((i+1)%8)==0)
		{
			printf(" ");
		}
		mask=mask>>1;
	}
    printf("\n");
}

void AND(unsigned int a, unsigned int b)
{
	unsigned int result;
	result=a&b;
	printf("And)");
	BIN(result);
}

void OR(unsigned int a, unsigned int b)
{
	unsigned int result;
	result=a|b;
	printf("OR)");
	BIN(result);
}

void XOR(unsigned int a, unsigned int b)
{
	unsigned int result;
	result=a^b;
	printf("XOR)");
	BIN(result);
}

void COM(unsigned int a, unsigned int b)
{
	
	printf("COM)");
	BIN(~a+1);
	printf("COM)");
	BIN(~b+1);
}

