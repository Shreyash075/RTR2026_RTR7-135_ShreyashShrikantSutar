#include <stdio.h>

typedef struct {
	int i;
	float f;
	double d;
	char c;
} MyData;

int main(void)
{
	//variable declaraions
	MyData d;

	//code
	d.i = 35;
	d.f = 14.35f;
	d.d = 2.12345;
	d.c = 'S';

	printf("\n\n");
	printf("DATA MEMBERS OF 'MyData' ARE : \n\n");
	printf("i = %d\n", d.i);
	printf("f = %f\n", d.f);
	printf("d = %lf\n", d.d);
	printf("c = %c\n\n", d.c);

	printf("\n\n");
	printf("ADDRESSES OF DATA MEMBERS OF 'MyData' ARE : \n\n");
	printf("'i' Occupies Addresses From %p\n", &d.i);
	printf("'f' Occupies Addresses From %p\n", &d.f);
	printf("'d' Occupies Addresses From %p\n", &d.d);
	printf("'c' Occupies Address %p\n\n", &d.c);

	printf("Starting Address Of 'struct MyData' variable 'd' = %p\n\n", &d);

	return(0);
}


