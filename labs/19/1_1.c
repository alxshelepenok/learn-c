#include <stdio.h>
#include <stdlib.h>

int main() {
	int *arr;
	int a, b, i, n, multiplication, count;

	multiplication = 1;
	count = 0;

	printf("Please, enter size of Array: ");
	scanf("%d", &n);

	arr = (int*)malloc(n*sizeof(int));

	printf("Please, enter elements of array: \n");
	for (i = 0; i < n; i++) {
	    printf("arr[%d] = ", i);
	    scanf("%d", (arr+i));
	}

	for (i = 0; i < n; i++) {
     		if (*(arr+i)%2 == 0 && *(arr+i) < 0) {
     			multiplication *= *(arr+i);
     			count++;
     		}
	}

	if (count > 0) {
		printf("Multiplication = %d\n", multiplication);
	} else {
		printf("Elements not Found!");
	}

	return 0;
}