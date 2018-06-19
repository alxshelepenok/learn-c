#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int *arr;
	int a, b, i, n, multiplication, count;

	printf("Please, enter size of Array: ");
	scanf("%d", &n);

	arr = (int*)malloc(n*sizeof(int));

	printf("Please, enter interval A, B: ");
	scanf("%d %d", &a, &b);

	srand(time(NULL));

	multiplication = 1;
	count = 0;

	for (i = 0; i < n; i++) {
	    *(arr+i) = 1 + rand()%100;
	}

	printf("Array: [");
	for (i = 0; i < n; i++) {
		printf(" %d ", *(arr+i));

     		if (*(arr+i) >= a && *(arr+i) <= b) {
     			multiplication *= *(arr+i);
     			count++;
     		}
	}
	printf("]\n");

	if (count > 0) {
		printf("Multiplication = %d\n", multiplication);
	} else {
		printf("Elements not found!");
	}

	return 0;
}