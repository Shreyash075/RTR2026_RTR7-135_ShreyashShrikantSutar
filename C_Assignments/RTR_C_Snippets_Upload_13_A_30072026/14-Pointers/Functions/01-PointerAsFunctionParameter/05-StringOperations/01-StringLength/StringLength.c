#include<stdio.h>
#include<stdlib.h>
#define MAX_STRING_LENGTH 512

int main(void)
{
	int MyStrlen(char*);

	char* chArray = NULL;
	int iStringLength = 0;
	printf("\n\n");
	chArray = (char*)malloc(MAX_STRING_LENGTH * sizeof(char));
	if (chArray == NULL)
	{
		printf("MEMORY ALLOCATION TO CHARACTER ARRAY FAILED !! EXITING NOW..\n\n");
		exit(0);
	}
	printf("\n\n");
	printf("Enter A string : \n\n");
	gets_s(chArray, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("A string enterd by you is : \n\n");
	printf("%s\n", chArray);

	printf("\n\n");
	iStringLength = MyStrlen(chArray);
	printf("Length of string is = %d character !!\n\n", iStringLength);

	if (chArray)
	{
		free(chArray);
		chArray = NULL;
	}
	return (0);
}

int MyStrlen(char* str)
{
	int i;
	int string_length = 0;
	for (i = 0; i < MAX_STRING_LENGTH; i++)
	{
		if (*(str + i) == '\0')
			break;
		else
			string_length++;
	}
	return string_length;
}

