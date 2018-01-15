#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int N = 10;

int randInt(int min, int max) {
	return min + rand() % max;
}

int main() {
	int arr[N];
	int i, sum, randNumber, randSign, isNegativeFound, notEvenCount;
	float avg;

	srand(time(NULL));

	notEvenCount = 0;
	isNegativeFound = 0;
	sum = 0;
	avg = 0;

	for (i = 0; i < N; i++) {
	    randSign = randInt(1, 2);
	    if (randSign == 1) {
	    	randNumber = randInt(1, 50);
	    } else {
	    	randNumber = randInt(-50, -1);
	    }

	    arr[i] = randNumber;
	}

	printf("Исходный массив: [");
	for (i = 0; i < N; i++) {
		printf(" %d ", arr[i]);

     		if (arr[i]%2 != 0 && isNegativeFound == 1) {
     			sum += arr[i];
     			notEvenCount++;
     		}

		if (arr[i] < 0 && isNegativeFound == 0) {
			isNegativeFound = 1;
		}
	}
	printf("]\n");

	if (notEvenCount > 0) {
		avg = sum/notEvenCount;
		printf("Cреднее арифметическое нечётных = %f\n", avg);
	} else {
		printf("Таких значений нет.\n");
	}

	return 0;
}