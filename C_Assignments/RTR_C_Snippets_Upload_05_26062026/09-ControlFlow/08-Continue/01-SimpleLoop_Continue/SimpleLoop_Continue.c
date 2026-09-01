#include<stdio.h>
int main(void)
{
	// variable declarations
	int i;

	// code
	printf("\n\n");

	for( i = 0; i <= 80; i++)
	{
		// if remainder is not 0, the number is odd number...
		if(i % 2 != 0)
		{
			continue;
		}
		else
		{
			printf("\t%d\n", i);
		}
	}

	printf("\n\n");

	return(0);
}

