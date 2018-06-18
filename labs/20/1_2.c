#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

int main() {
	double *arr;
	int *newArr;
	int i, n, count;

	srand(time(NULL));

	printf("Enter size of array: ");
	scanf("%d", &n);

	arr = (double*)malloc(n*sizeof(double));
	newArr = (int*)malloc(n*sizeof(int));

	for (i = 0; i < n; i++) {
		if (i > randDouble(1, n)) {
			 *(arr+i)  = randDouble(0, 1);
		} else {
			*(arr+i) = 0;
		}  
	}

	count = 0;

	printf("Array: [");
	for (i = 0; i < n; i++) {
		if (*(arr+i) == 0) {
			*(newArr+count) = i;
			count++;
		}

		printf(" %lf ", *(arr+i));
	}
	printf("]\n");

	if (count != 0) {
		printf("New array: [");
		for (i = 0; i < count; i++) {
			printf(" %d ", *(newArr+i));
		}
		printf("]\n");
	} else {
		printf("Elements not found!\n", count);
	}

	free(arr);
	free(newArr);

	return 0;
}