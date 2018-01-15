#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int N = 10;

int randInt(int min, int max) {
	return min+rand()%max;
}

int main() {
	int arr[N];
	int i, sum, notEvenCount;
	float avg;

	srand(time(NULL));

	notEvenCount = 0;
	sum = 0;
	avg = 0;

	for (i = 0; i < N; i++) {
	    arr[i] = randInt(1, 100);
	}

	printf("Исходный массив: [");
	for (i = 0; i < N; i++) {
		printf(" %d ", arr[i]);

     		if (arr[i]%2 != 0) {
     			sum += arr[i];
     			notEvenCount++;
     		}
	}
	printf("]\n");

	if (notEvenCount > 0) {
		avg = sum/notEvenCount;
		printf("Cреднее арифметическое нечётных = %f\n", avg);
	} else {
		printf("Таких значений нет.");
	}

	return 0;
}