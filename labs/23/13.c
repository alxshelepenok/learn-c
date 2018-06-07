#include <stdio.h>

int recursive(int x, int n) {
	if (n == 1) {
		return x;
	}

	if (n%2 == 0) {
		return recursive(x*x, n/2);
	}

	return x * recursive(x, n-1);
}

int main() {
	int x, y, n;

	printf("Введите значения переменных x и n: ");
	scanf("%d %d", &x, &n);

	y = recursive(x, n);
	printf("Y = %d\n", y);

	return 0;
}