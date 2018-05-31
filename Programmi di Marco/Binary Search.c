#include <stdio.h>

int binary_search(int key, int array[], int low, int high);

int main()
{
	
	int vettore[10]={11,22,33,44,55,66,77,88,98,99};
	int key;
	int N=10;
	int result;
	
	printf("Inserisci la Key: ");
	scanf(" %d",&key);
	
	result= binary_search(key,vettore, 0,N-1);
	
	if(result!=-1)
	printf("La key si trova alla posizione %d dell'array",result);
	else
	printf("La key non e' stata trovata");
	
	return 0;
	
}



int binary_search(int key, int array[], int low, int high)
{
	int i, med;
	
	med=(low + high)/2;
	
	if(low<high)
	{
		return -1;
	}
	if(array[med]==key)
	{
		return med;
	}
	else if(array[med]<key)
	    {
	    	return binary_search(key,array,med+1,high);
		}
		else
		{
			return binary_search(key,array,low,med-1);
		}
}
