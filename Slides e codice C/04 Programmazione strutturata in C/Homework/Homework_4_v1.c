#include<stdio.h>

int main(void){
	int palindromo=11211;

	int first_digit = palindromo % 10;
	
	palindromo = palindromo / 10;
	int second_digit = palindromo % 10;
	
	palindromo = palindromo / 10;
	int third_digit = palindromo % 10;
	
	palindromo = palindromo / 10;
	int fourth_digit = palindromo % 10;
	
	palindromo = palindromo / 10;
	int fiveth_digit= palindromo % 10;

	/*printf("%d\n", first_digit);
	printf("%d\n", second_digit);
	printf("%d\n", third_digit);
	printf("%d\n", fourth_digit);
	printf("%d\n", fiveth_digit);*/


	if(first_digit == fiveth_digit && second_digit == fourth_digit)
		printf("Il numero è palindromo\n");
	else
		printf("In numero non è palindromo\n");
	return 0;
}