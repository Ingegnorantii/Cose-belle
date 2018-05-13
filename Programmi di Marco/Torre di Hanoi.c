#include <stdio.h>

void torre(int ,char,char,char);

//void m(int,char,char);

int mo=0;


int main()
{
	int x;
	
	printf("Benvenuto al gioco della torre di Hanoi\n");
	
        printf("        ___                    |                    |         \n");
	printf("       |   |                   |                    |         \n");
	printf("      _______                  |                    |         \n");
	printf("     |       |                 |                    |         \n");
	printf("     _________                 |                    |         \n");
	printf("    |         |                |                    |         \n");
	printf("  _______________       _______________      _______________  \n");
	printf("         A                     B                    C         \n");
	
	printf("Con quanti dischi vuoi giocare?\n");
        scanf("%d",&x);
    
    torre(x,'A','C','B');
	return 0;
} 

void torre(int num,char t1,char t2,char t3)
{
	if(num==1)
	{
		printf("Mossa %d:sposta un disco da %c a %c\n",++mo,t1,t3);
	
	}
	else
	{
		torre(num-1,t1,t3,t2);
		printf("Mossa %d:sposta un disco da %c a %c\n",++mo,t1,t3);
		torre(num-1,t2,t1,t3);
	}
}
