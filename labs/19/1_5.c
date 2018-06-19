#include <stdio.h>
#include <stdlib.h>

int main() {
	int *arr;
	int n, a, b, i, count;

	printf("Please, enter size of Array: ");
	scanf("%d", &n);

	arr = (int*)malloc(n*sizeof(int));

	count = 0;

	printf("Please, enter elements of Array: \n");
	for (i = 0; i < n; i++) {
	    printf("arr[%d] = ", i);
	    scanf("%d", (arr+i));
	}

	for (i = 0; i < n; i++) {
     		if (*(arr+i)%7 == 2 || *(arr+i)%7 == 5) {
     			printf("Found value: %d \n", *(arr+i));
     			count++;
     		}
	}

	if (count == 0) {
		printf("Elements not found!");
	}

	return 0;
}