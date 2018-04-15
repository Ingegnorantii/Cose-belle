#include<stdio.h>

int main(void){

	unsigned int index1=1, index2=2, index3=3, index4=4;
	float time1=7.7, time2=5.34, time3=9.88, time4=2.01;

	unsigned int first=0, second=0;
	float minTime1=999, minTime2=999;

	/*Controlli per il primo atleta*/
	if (time1 < minTime2){
		if (time1 < minTime1){
			minTime2 = minTime1;
			minTime1 = time1;
			second = first;
			first = index1;
		} else {
			minTime2 = time1;
			second = index1;
		}
	}

	/*Controlli per il secondo atleta*/
	if (time2 < minTime2){
		if (time2 < minTime1){
			minTime2 = minTime1;
			minTime1 = time2;
			second = first;
			first = index2;
		} else {
			minTime2 = time2;
			second = index2;
		}
	}

	/*Controlli per il terzo atleta*/
	if (time3 < minTime2){
		if (time3 < minTime1){
			minTime2 = minTime1;
			minTime1 = time3;
			second = first;
			first = index3;
		} else {
			minTime2 = time3;
			second = index3;
		}
	}

	/*Controlli per il quarto atleta*/
	if (time4 < minTime2){
		if (time4 < minTime1){
			minTime2 = minTime1;
			minTime1 = time4;
			second = first;
			first = index4;
		} else {
			minTime2 = time4;
			second = index4;
		}
	}

	printf("Il primo classificato è l'atleta %d con un tempo di %f\n", first, minTime1);
	printf("Il secondo classificato è l'atleta %d con un tempo di %f \n", second, minTime2);
	return 0;
}