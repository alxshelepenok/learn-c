#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int N = 10;

int main() {
	int arr[N];
	int a, b, i, multiplication, count;

	printf("Введите интервал A, B: ");
	scanf("%d %d", &a, &b);

	srand(time(NULL));

	multiplication = 1;
	count = 0;

	for (i = 0; i < N; i++) {
	    arr[i] = 1+rand()%100;
	}

	printf("Исходный массив: [");
	for (i = 0; i < N; i++) {
		printf(" %d ", arr[i]);

     		if (arr[i] >= a && arr[i] <= b) {
     			multiplication *= arr[i];
     			count++;
     		}
	}
	printf("]\n");

	if (count > 0) {
		printf("Произведение = %d\n", multiplication);
	} else {
		printf("Таких значений нет!");
	}

	return 0;
}