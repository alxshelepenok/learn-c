#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int N = 2;

/**
 * Function randDouble gets random number
 *
 * @param double min
 * @param double max
 * @return double number 
 */
double randDouble(double min, double max) {
	return (double)(rand())/RAND_MAX*(max-min)+min;
}

/**
 * Function calcDiag calculate the diagonal of matrix
 *
 * @param double* arr
 * @return double m
 */
double calcDiag(double* arr) {
	int i;
	double diag = 1;
	
	for (i = 0; i < N; i++) {
		diag *= *(arr+i+1);
	}

	return diag;
}

int main() {
	double diag, *arr;
	int i, j;

	srand(time(NULL));

	arr = (double*)malloc(N*N*sizeof(double));

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
	    		*(arr+i*N+j) = randDouble(1, 9);
	    	}
	}

	printf("Matrix: \n");
	for (i = 0; i < N; i++) {
		printf("| ");
		for (j = 0; j < N; j++) {
			printf("%lf ", *(arr+i*N+j));
		}
		printf("|\n");
	}

	diag = calcDiag(arr);
	printf("Diagonal: %lf\n", diag);

	free(arr);

	return 0;
}