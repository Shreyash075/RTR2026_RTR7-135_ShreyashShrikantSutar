#include <stdio.h>

typedef struct
{
	int x;
	int y;
} Point;

Point p1, p2, p3, p4, p5;

int main(void)
{
	//code
	p1.x = 1;
	p1.y = 2;

	p2.x = 3;
	p2.y = 5;

	p3.x = 8;
	p3.y = 4;

	p4.x = 9;
	p4.y = 6;

	p5.x = 11;
	p5.y = 7;

	printf("\n\n");
	printf("Co-ordinates (x, y) Of Point 'A' Are : (%d, %d)\n\n", p1.x, p1.y);
	printf("Co-ordinates (x, y) Of Point 'B' Are : (%d, %d)\n\n", p2.x, p2.y);
	printf("Co-ordinates (x, y) Of Point 'C' Are : (%d, %d)\n\n", p3.x, p3.y);
	printf("Co-ordinates (x, y) Of Point 'D' Are : (%d, %d)\n\n", p4.x, p4.y);
	printf("Co-ordinates (x, y) Of Point 'E' Are : (%d, %d)\n\n", p5.x, p5.y);

	return(0);
}


