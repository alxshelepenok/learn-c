#include <stdio.h>
#include <math.h>

const int N = 10;

int main() {
	int i, arr[N], count, sum;

	// Ввод элементов массива
	printf("Vvedite elementi massiva:\n");
	for (i=0; i<N; i++) {

		// Вывод сообщения на экран
		printf("arr[%d]=", i);

		// Получение введенного пользователем значения
		scanf("%d", &arr[i]);
	}

	// Начальные значения

	// Сумма
	sum = 0;

	// Колличество
	count = 0;

	for (i=0; i<N; i++) {
		if (i==arr[i]) {
			sum += arr[i];
			count++;
		}
	}

	if (count != 0) {
		// (float) - это изменение типа на вещественный
		printf("Srednee = %f\n", (float)sum/count);
	} else {
		printf("Takix znacheniy net!");
	}

	return 0;
}
