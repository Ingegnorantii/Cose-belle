#include <stdio.h>

void Hanoi(int n, char, char, char);
void mossa(int n, char pal1, char pal2);
int mossa = 0;
char invio;

int main ()
{
    int x, i;
    
    printf("Inserisci il numero di dischi: ");
    scanf("%d", &x);
    
    for(i=1; i <= x; i++)
        
        printf("\n%10d	|    |\n", i);
    
 	    printf("\n  		  A    B    C \n");
    
    puts("\nMosse (premi invio): ");
    scanf("%c", &invio);
    Hanoi(x, 'A', 'B', 'C');
    
    return 0;
}

void Hanoi(int n, char pal1, char pal2, char paltemp)
{
   if (n == 1)
    	
       mossa(n, pal1, pal2);
   
    else
    {       
       Hanoi(n-1, pal1, paltemp, pal2);
       mossa(n, pal1, pal2);
       Hanoi(n-1, paltemp, pal2, pal1);
    }
    
}

void mossa(int n, char pal1, char pal2)
{	
   
    	scanf("%c", &invio);
    	printf("\n\nMossa %3d: ", ++mossa);
    	printf("Disco %d da %c a %c\n", n, pal1, pal2);
    	

}   
