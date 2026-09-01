#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	void TSA_MathematicalOperations(int, int, int *, int *, int *, int *, int *);

	int a;
	int b;
	int *answer_sum = NULL;
	int *answer_difference = NULL;
	int *answer_product = NULL;
	int *answer_quotient = NULL;
	int *answer_reainder = NULL;

	printf("\n\n");
	printf("Enter Value of 'A' :");
	scanf("%d", &a);
	printf("\n\n");
	printf("Enter Value of 'B' :");
	scanf("%d", &b);

	answer_sum = (int*)malloc(1 * sizeof(int));
	if (answer_sum == NULL)
	{
		printf("Could Not Allocate Memory for 'answer_sum' . exitting now.....\n\n");
		exit(0);
	}
	answer_difference = (int*)malloc(1 * sizeof(int));
	if (answer_difference == NULL)
	{
		printf("Could Not Allocate Memory for 'answer_difference' . exitting now.....\n\n");
		exit(0);
	}
	answer_product = (int*)malloc(1 * sizeof(int));
	if (answer_product == NULL)
	{
		printf("Could Not Allocate Memory for 'answer_product' . exitting now.....\n\n");
		exit(0);
	}
	answer_quotient = (int*)malloc(1 * sizeof(int));
	if (answer_quotient == NULL)
	{
		printf("Could Not Allocate Memory for 'answer_quotient' . exitting now.....\n\n");
		exit(0);
	}
	answer_reainder = (int*)malloc(1 * sizeof(int));
	if (answer_reainder == NULL)
	{
		printf("Could Not Allocate Memory for 'answer_reainder' . exitting now.....\n\n");
		exit(0);
	}

	TSA_MathematicalOperations(a, b, answer_sum, answer_difference, answer_product, answer_quotient, answer_reainder);
	printf("\n\n");
	printf("********* RESULT ******\n\n");
	printf("Sum = %d\n\n", *answer_sum);
	printf("Difference = %d\n\n", *answer_difference);
	printf("Product = %d\n\n",*answer_product);
	printf("Quotient = %d\n\n", *answer_quotient);
	printf("Remainder = %d\n\n", *answer_reainder);

	if (answer_reainder)
	{
		free(answer_reainder);
		answer_reainder = NULL;
		printf("Memory allocated for 'answer_remainder' successfully freed !!!\n\n");
	}
	if (answer_quotient)
	{
		free(answer_quotient);
		answer_quotient = NULL;
		printf("Memory allocated for 'answer_quotient' successfully freed !!!\n\n");
	}
	if (answer_product)
	{
		free(answer_product);
		answer_product = NULL;
		printf("Memory allocated for 'answer_product' successfully freed !!!\n\n");
	}
	if (answer_difference)
	{
		free(answer_difference);
		answer_difference = NULL;
		printf("Memory allocated for 'answer_difference' successfully freed !!!\n\n");
	}
	if (answer_sum)
	{
		free(answer_sum);
		answer_sum = NULL;
		printf("Memory allocated for 'answer_sum' successfully freed !!!\n\n");
	}

	return (0);
}

void TSA_MathematicalOperations(int x, int y, int *sum, int *difference, int *product, int *quotient, int *remainder)
{

	*sum = x + y;
	*difference = x - y;
	*product = x * y;
	*quotient = x / y;
	*remainder = x % y;
}

