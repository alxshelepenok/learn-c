#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Функция randInt() получает рандомное целочисленное значение.
 * @param min нижнее значение
 * @param max верхнее значение
 *
 * @return int рандомное целочисленное значение. 
 */
int randInt(int min, int max) {
	return min + rand() % max;
}

const int N = 10;

int main() {
	int arr[N], newArr[N];
	int i, c, sum, count;

	srand(time(NULL));

	for (i = 0; i < N; i++) {
	    arr[i] = randInt(1, 100);
	}

	count = 0;

	printf("Исходный массив: [");
	for (i = 0; i < N; i++) {

		if (arr[i]%7==2 || arr[i]%7==5) {
			newArr[count] = arr[i];
			count++;
		}

		printf(" %d (%d\%7=%d)", arr[i], arr[i], arr[i]%7);
	}
	printf("]\n");

	printf("Новый массив: [");
	for (i = 0; i < count; i++) {
		printf(" %d ", newArr[i]);
	}
	printf("]\n");

	return 0;
}