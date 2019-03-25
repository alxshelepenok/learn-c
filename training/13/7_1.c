#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Enter size of array, N = ");
	scanf("%d", &n);

	int m;
	printf("Enter number, M = ");
	scanf("%d", &m);

	int i, arr[n];
	srand(time(NULL));
	for (i = 0; i < n; i++) {
	    arr[i] = 1+rand()%9;
	}

	printf("Ok, array: [");
	for (i = 0; i < n; i++) {
		printf(" %d ", arr[i]);	
	}
	printf("]\n");

	int count = 0;
	int multipl = 1;
	for (i = 0; i < n; i++) {
		if (arr[i] % m == 0) {
			multipl *= arr[i];
			count++;
		}
	}

	if (count != 0) {
		printf("Result: MULTIPL = %d\n", multipl);
	} else {
		printf("Result: numbers not found!\n");
	}

	return 0;
}
