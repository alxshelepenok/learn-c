#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
	int n;
	printf("Enter size of array, N = ");
	scanf("%d", &n);

	int i;
	double *arr = (double*)malloc(n*sizeof(double));
	srand(time(NULL));
	for (i = 0; i < n; i++) {
		*(arr+i) = (double)(rand())/RAND_MAX*(99.0-10.0)+10.0;
	}

	printf("Ok, array: [");
	for (i = 0; i < n; i++) {
		printf(" %lf ", *(arr+i));	
	}
	printf("]\n");

	int newSize = 0;
	double *newArr = (double*)malloc(n*sizeof(double));
	for (i = 0; i < n; i++) {
		if (*(arr+i)-(int)*(arr+i) > 0.63) {
			*(newArr+newSize) = *(arr+i);
			newSize++;
		}
	}

	printf("Result, new array: [");
	for (i = 0; i < newSize; i++) {
		printf(" %lf ", *(newArr+i));	
	}
	printf("]\n");

	return 0;
}
