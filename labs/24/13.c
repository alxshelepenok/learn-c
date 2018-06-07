#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int N = 3;

/**
 * Функция randDouble() получает рандомное вещественное значение.
 * @param min нижнее значение
 * @param max верхнее значение
 *
 * @return double рандомное вещественное значение. 
 */
double randDouble(double min, double max) {
	return (double)(rand())/RAND_MAX*(max-min)+min;
}

/**
* Функция avgDoubleArr вычисляет среднее арифметическое элементов вещественного массива.
* @param arr[N] массив вещественных чисел. 
*
* @return double среднее арифметическое.
*/
double avgDoubleArr(double arr[N]) {
	int i;
	double s;

	s = 0;

	for (i = 0; i < N; i++) {
     		s += arr[i];
	}

	return s/N;
}

int main() {
	double arr[N];
	double avg;
	int i;

	srand(time(NULL));

	// Заполнение массива вещественными числами
	for (i = 0; i < N; i++) {
	    arr[i] = randDouble(1, 100.1);
	}

	// Форматированный вывод массива
	printf("Array: [");
	for (i = 0; i < N; i++) {
		printf(" %lf ", arr[i]);
	}
	printf("]\n");

	// Вычисление среднего значения массива
	avg = avgDoubleArr(arr);
	printf("Avg = %lf\n", avg);

	// Вывод преобразованного массива
	printf("New Array: [");
	for (i = 0; i < N; i++) {
		arr[i] = arr[i] - avg;
		printf(" %lf ", arr[i]);
	}
	printf("]\n");

	return 0;
}