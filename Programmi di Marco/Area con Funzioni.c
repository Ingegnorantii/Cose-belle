#include <stdio.h>

void cerchio();
void quadrato();
void triangolo();
void rettangolo();

int main()
{
	int scelta,ris;
	
	do
	{
		printf("Quale area vuoi calcolare?");
		printf("\n1.Cerchio\n2.Quadrato\n3.Triangolo\n4.Rettangolo\n");
		scanf("\n %d",&scelta);
	}
	while((scelta<1)||(scelta>4));
	
	switch(scelta)
	{
		    case 1:
			cerchio();
			break;
			
			case 2:
		    quadrato();
		    break;
		    
		    case 3:
		    triangolo();
		    break;
		    
		    case 4:
		    rettangolo();
		    break;
		    	
	}
	return 0;
}


void cerchio()
{
	
	float r,A;
	printf("Inserire il Raggio\n");
	scanf("%2f",&r);
	
	A=3.14*r*r;
	
	printf("L'area: %2f\n",A);
}

void quadrato()
{
	
	float l,A;
	printf("Inserire il lato\n");
	scanf("%2f",&l);
	
	A=l*l;
	
	printf("L'area:%2f\n",A);
}

void triangolo()
{
	
	float b,h,A;
	printf("Inserire la base\n");
	scanf("%2f",&b);
	
	printf("Inserire l'altezza\n");
	scanf("%2f",&h);
	
	A=(b*h)/2;
	
	printf("L'area:%2f\n",A);
}

void rettangolo()
{
	
	float b,h,A;
	printf("Inserire la base\n");
	scanf("%2f",&b);
	
	printf("Inserire l'altezza\n");
	scanf("%2f",&h);
	
	A=(b*h);
	
	printf("L'area:%2f\n",A);
}
