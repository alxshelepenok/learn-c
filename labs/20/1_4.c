#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randInt(int min, int max) {
	return min + rand() % max;
}

int main() {
	int *arr;
	int i, n, multiplication;

	srand(time(NULL));

	printf("Size of Array: ");
	scanf("%d", &n);

	arr = (int*)malloc(n*sizeof(int));

	for (i = 0; i < n; i++) {
	    *(arr+i)  = randInt(0, 9);
	}

	multiplication = 1;

	printf("Array: [");
	for (i = 0; i < n; i++) {
		if (i%2 != 0 && *(arr+i) != 0) {
			multiplication = multiplication*(*(arr+i));
		}

		printf(" %d ", *(arr+i));
	}
	printf("]\n");

	printf("multiplication = %d\n", multiplication);

	free(arr);

	return 0;
}