#include <stdio.h>

int main() {
	int i, n;
	float x;

	printf("Введите число N: ");
	scanf("%d", &n);

	x = 1;

	for (i = 1; i <= n; i++) {
		x *= (float)(i+2)/(float)(i*2);
	}

	printf("X = %f\n", x);
}