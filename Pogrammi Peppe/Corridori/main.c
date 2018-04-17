//Dichiarazione librerie
#include <stdio.h>

//Programma principale
int main()
{
	int corA,corB,corTemp;		 //Corridori (CorA, CorB Sono i due migliori corridori; corTemp è quello che viene confrontato man mano)
	float tempA=999,tempB=999,tempTemp;		//Tempi (TempA,TempB Sono i due tempi migliori, tempTemp è quello messo a confronto man mano)
	for(int i=0; i<8;i++)				//Non rompete più il cazzo, grazie.
	{						//Scherzo...
		do					//Però seriamente... no.
		{					
			printf("Dammi l'id del corridore n° %d (Tra 1 e 255)",i+1);	//Controllo dell'id
			scanf("%d", &corTemp);
		}
		while((corTemp<1)||(corTemp>255));
		do
		{
			printf("Dammi il tempo del corridore n° %d (Tra 0 e 20)",i+1); //Controllo tempo
			scanf("%f", &tempTemp);			
		}
		while ((tempTemp<=0.00)||(tempTemp>20.00));

		
		if (tempTemp<tempA)
		{
			tempB=tempA;
			tempA=tempTemp;
			corB=corA;
			corA=corTemp;
		}
		else if (tempTemp<tempB)
		{
			tempB=tempTemp;
			corB=corTemp;
		}
	}
	printf("I corridori più migliori assai sono;\nal primo posto ID: %d con tempo: %f\nal secondo posto ID: %d con tempo: %f",corA,tempA,corB,tempB);
	return 0;
}
