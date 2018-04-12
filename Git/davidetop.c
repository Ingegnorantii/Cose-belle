		#include <stdio.h>
		#include <math.h>

int main(int argc, char const *argv[])
{
	int last;
	int primo;


	for (int n = 2; n <= 100; ++n)
	{
		primo = 1;
		last = sqrt(n);
		for (int i = 2; i <= last; ++i)
		{
			if (n % i == 0)
			{
				primo = 0;
			}
		}

		if (primo)
		{
			printf("%d è primo\n", n);
		}
	}



	return 0;
}