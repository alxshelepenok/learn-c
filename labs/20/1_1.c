#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>

int randInt(int min, int max) {
	return min + rand() % max;
}

int main() {
	int *arr;
	int i, n, sum, count;

	srand(time(NULL));

	printf("Size of Array: ");
	scanf("%d", &n);

	arr = (int*)malloc(n*sizeof(int));

	for (i = 0; i < n; i++) {
	    *(arr+i)  = randInt(0, 9);
	}

	sum = 0;
	count = 0;

	printf("Array: [");
	for (i = 0; i < n; i++) {

		if (i%2 != 0 && *(arr+i)>0) {
			sum += *(arr+i);
			count++;
		}

		printf(" %d ", *(arr+i));
	}
	printf("]\n");

	if (count != 0) {
		printf("SUM = %d\n", sum);
	} else {
		printf("Elements not Found!\n");
	}

	free(arr);

	return 0;
}