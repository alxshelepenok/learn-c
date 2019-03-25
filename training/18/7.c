#include <math.h>
#include <stdio.h>

int main() {
	double buf;
	double *pointer = &buf;

	double circle;
	printf("Circle area: ");
	scanf("%f", pointer);
	circle = sqrt(*pointer);

	double square;
	printf("Square area: ");
	scanf("%f", pointer);
	square = sqrt((4*(*pointer))/M_PI);

	printf("Result: ");
	if (circle < square) {
		printf("Will fit!\n");
	} else {
		printf("Will not fit!\n");
	}
	
	return 0;
}