#include<stdio.h>

int main(void)
{
	// variable declarations
	int i, j, k;

	// code
	printf("\n\n");

	i = 1;
	do
	{
		printf("ip = %d \n", i);
		printf("========\n\n");

		j = 1;
		do
		{
			printf("\tjp = %d \n", i);
                	printf("========\n\n");

			k = 1;
			do
			{
				printf("\t\tkp = %d \n", k);
				k++;
			}while(k <= 2);
			printf("\n\n");
			j++;
		}while(j <= 4);
		printf("\n\n");
		i++;
	}while(i <= 6);
	
	return(0);
}

