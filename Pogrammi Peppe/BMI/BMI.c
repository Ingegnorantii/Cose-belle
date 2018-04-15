//Dichiarazioni librerie
#include <stdio.h>

//Programma principale
int main()
{
	double peso, alt;
	float BMI;
	printf("Quanto pesi (In kg)? ");
	scanf("%lf", &peso);
	printf("\nQuanto sei alto (In metri)? ", alt);
	scanf("%lf", &alt);
	BMI= peso/(alt*alt);
	printf("\nIl tuo BMI è: %f\n", BMI);
	return 0;
}