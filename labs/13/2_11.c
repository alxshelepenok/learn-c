#include <stdio.h>
#include <math.h>

const int N = 10;

int main() {
	int i, absSum, minID, arr[N];

	printf("Vvedite elementi massiva:\n");
	for (i=0; i<N; i++) {
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}

	minID = 0;
	absSum = 0;

	// Поиск минимального по модулю значения
	for (i=0; i<N; i++) {
		if (abs(arr[i]) < arr[minID]) {
			minID = i;
		}
	}

	// Считаем сумму после минимального по модулю элемента
	for (i=minID; i<N; i++) {
		absSum += abs(arr[i]); 
	}

	printf("Summa = %d\n", absSum);

	return 0;
}
