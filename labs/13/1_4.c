#include <stdio.h>

const int N = 10;

int main() {
	int arr[N];
	int a, b, i, multiplication, count;

	multiplication = 1;
	count = 0;

	printf("Введите массив!\n");
	for (i = 0; i < N; i++) {
	    printf("arr[%d] = ", i);
	    scanf("%d", &arr[i]);
	}

	for (i = 0; i < N; i++) {
     		if (arr[i]%3 == 0 && arr[i]%5 != 0) {
     			multiplication *= arr[i];
     			count++;
     		}
	}

	if (count > 0) {
		printf("Произведение = %d\n", multiplication);
	} else {
		printf("Таких значений нет!");
	}

	return 0;
}