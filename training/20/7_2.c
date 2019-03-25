#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
	printf("Enter range of matrix: \n");

	int n;
	printf("N = ");
	scanf("%d", &n);

	int i, j;
	double *arr = (double*)malloc(n*n*sizeof(double));
	srand(time(NULL));
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			*(arr+i*n+j) = (double)(rand())/RAND_MAX*(99.0-10.0)+10.0;
		}
	}

	printf("Ok, random matrix: \n");
	for (i = 0; i < n; i++) {
		printf("| ");
		for (j = 0; j < n; j++) {
			printf("%lf ", *(arr+i*n+j));
		}
		printf("|\n");
	}

	int lock, newSize = 0;
	double *newArr = (double*)malloc(n*sizeof(double));
	double fraction, columnMultipl, currentIntegerPart;
	for (j = 0; j < n; j++) {
		lock = 1;
		columnMultipl = 1;

		for (i = 0; i < n; i++) {
			columnMultipl *= *(arr+i*n+j);

			if (i == j) {
				fraction = modf(*(arr+i*n+j), &currentIntegerPart);
				if ((int)currentIntegerPart % 2 == 0) {
					lock = 0;
				}
			}
		}

		if (lock == 0) {
			*(newArr+newSize) = columnMultipl;
			newSize++;
		}
	}


	printf("Result:\n");

	if (newSize != 0) {
		printf("New array: [");
		for (i = 0; i < newSize; i++) {
			printf(" %lf ", *(newArr+i));	
		}
		printf("]\n");
	} else {
		printf("Elements are missing!\n");
	}


	return 0;
}