#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randInt(int min, int max) {
	return min+rand()%max;
}

int main() {
	int *arr;
	int i, sum, n, notEvenCount;
	float avg;

	printf("Please, enter size of Array: ");
	scanf("%d", &n);

	arr = (int*)malloc(n*sizeof(int));

	srand(time(NULL));

	notEvenCount = 0;
	sum = 0;
	avg = 0;

	for (i = 0; i < n; i++) {
	    *(arr+i) = randInt(1, 100);
	}

	printf("Исходный массив: [");
	for (i = 0; i < n; i++) {
		printf(" %d ", *(arr+i));

     		if (arr[i]%2 != 0) {
     			sum += *(arr+i);
     			notEvenCount++;
     		}
	}
	printf("]\n");

	if (notEvenCount > 0) {
		avg = sum/notEvenCount;
		printf("Average = %f\n", avg);
	} else {
		printf("Elements not found!");
	}

	return 0;
}