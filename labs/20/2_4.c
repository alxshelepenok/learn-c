#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double randDouble(double min, double max) {
	return (double)(rand())/RAND_MAX*(max-min)+min;
}

int main() {
	double *arr, *newArr, min;
	int i, j, n, m, count;

	srand(time(NULL));

	printf("Size of Matrix n*m: ");
	scanf("%d %d", &n, &m);

	arr = (double*)malloc(n*m*sizeof(double));
	newArr = (double*)malloc(n*m*sizeof(double));

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
	    		*(arr+i*m+j) = randDouble(-2, 9);
	    	}
	}

	printf("Matrix: \n");
	for (i = 0; i < n; i++) {
		printf("| ");
		for (j = 0; j < m; j++) {
			printf("%lf ", *(arr+i*m+j));
		}
		printf("|\n");
	}

	count = 0;

	for (i = 0; i < n; i++) {
		min = *(arr+i*m);
		for (j = 0; j < m; j++) {
			if (*(arr+i*m+j) < min) {
				min = *(arr+i*m+j);
			}
		}

		*(newArr+count) = min;
		count++;
	}

	if (count != 0) {
		printf("New Array: [");
		for (i = 0; i < count; i++) {
			printf(" %lf ", *(newArr+i));
		}
		printf("]\n");
	} else {
		printf("Elements not found!\n");
	}

	free(arr);
	free(newArr);

	return 0;
}