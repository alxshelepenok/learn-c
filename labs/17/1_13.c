#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Функция randInt получает целочисленное число с заданным интервалом.
 */
int randInt(int min, int max) {
	return min + rand() % max;
}

const int N = 10;

int main() {
	int arr[N], newArr[N];
	int i, c, sum, count;

	srand(time(NULL));

	// Получаем рандомные трехначные числа
	for (i = 0; i < N; i++) {
	    arr[i] = randInt(100, 999);
	}

	count = 0;

	printf("Исходный массив: [");
	for (i = 0; i < N; i++) {

		// Считаем сумму цифр числа
		sum = 0;
		c = arr[i];
		while(c != 0) {
			sum += c%10;
			c = c/10;
		}

		// Если сумма кратна индексу
		if (i > 0 && sum%i == 0) {
			newArr[count++] = arr[i];
		}

		printf(" %d ", arr[i]);
	}
	printf("]\n");

	// Вывод нового массива
	printf("Новый массив: [");
	for (i = 0; i < count; i++) {
		printf(" %d ", newArr[i]);
	}
	printf("]\n");

	return 0;
}