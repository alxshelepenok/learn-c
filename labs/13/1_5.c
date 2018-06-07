#include <stdio.h>

const int N = 10;

int main() {
	int arr[N];
	int a, b, i, count;

	count = 0;

	printf("Введите массив!\n");
	for (i = 0; i < N; i++) {
	    printf("arr[%d] = ", i);
	    scanf("%d", &arr[i]);
	}

	for (i = 0; i < N; i++) {
     		if (arr[i]%7 == 2 || arr[i]%7 == 5) {
     			printf("Найдено значение: %d \n", arr[i]);
     			count++;
     		}
	}

	if (count == 0) {
		printf("Таких значений нет!");
	}

	return 0;
}