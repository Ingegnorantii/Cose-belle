//Dichiarazioni librerie
#include <stdio.h>


//Programma principale
int main()
{
	double Rad=1.732, Pi=3.141;
	double r,area,h;
	printf("Immetti il raggio R:	");
	scanf("%lf", &r);
	area=r*r;
	printf("\nL'area del quadrato con raggio R è: %lf", area);
	h=(Rad/2)*r;
	area=(r*h)/2;
	printf("\nL'area del triangolo equilatero con raggio R è: %lf", area);
	area=Pi*(r*r);
	printf("\nL'area del cerchio con raggio R è: %lf\n", area);
	return 0;
}