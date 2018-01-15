#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

const int N = 20;

/**
 * Функция randInt получает целочисленное число с заданным интервалом.
 */
int randInt(int min, int max) {
	return min + rand() % max;
}

int main() {
	int arr[N];
	int i, m, q, sum;

	printf("Введите число M: ");
	scanf("%d", &m);

	srand(time(NULL));

	sum = 0;

	for (i = 0; i < N; i++) {
	    arr[i] = randInt(1, 9);
	}

	printf("Исходный массив: [");
	for (i = 0; i < N; i++) {
		q = pow(arr[i], 2);
		if (q == m) {
			sum += arr[i];
		}

		printf(" %d ", arr[i]);
	}
	printf("]\n");

	printf("Сумма чисел, которые являются квадратами числа %d: %d\n", m, sum);

	return 0;
}