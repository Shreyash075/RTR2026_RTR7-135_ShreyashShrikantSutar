#include<stdio.h>

int main(void)
{
	// variable declarations
	char chArr1[] = {'A', 'L', 'L', 'U', '\0'}; // must give \0 for proper initliazation
	char chArr2[] = {'A', 'R', 'J', 'U', 'N'}; // must give \0 for proper initliazation
	char chArr3[] = "Of"; // \0 is assumed size given as 3 even if string has 2 chars
	char chArr4[] = "RTR7 BATCH 2026-27";

	char chArr_WithoutNullTerminator[] = {'H', 'e', 'l', 'l', 'o'};
	//code
	printf("\n\n");
	printf("Size Of chArr1 : %lu\n\n", sizeof(chArr1));
	printf("Size Of chArr2 : %lu\n\n", sizeof(chArr2));
	printf("Size Of chArr3 : %lu\n\n", sizeof(chArr3));
	printf("Size Of chArr4 : %lu\n\n", sizeof(chArr4));
	printf("\n\n");
	printf("The Strings Are : \n\n");
	printf("chArr1 : %s\n", chArr1);
	printf("chArr2 : %s\n", chArr2);
	printf("chArr3 : %s\n", chArr3);
	printf("chArr4 : %s\n", chArr4);
	printf("\n\n");
	printf("Size Of chArr_WithoutNullTerminator : %lu\n\n", sizeof(chArr_WithoutNullTerminator));
	printf("chArr_WithoutNullTerminator : %s\n", chArr_WithoutNullTerminator); //Will display garbage value at the end of string due to absence of \0
	return(0);
}

