#include <stdio.h>
#include <math.h>

int main() {
	int i, x, n, a, b;

	printf("Введите числа A, B, N: \n");
	scanf("%d %d %d", &a, &b, &n);

	for (i = 1; i<=n; i++) {
		x = pow(i, 3) - 17*i*pow(n, 2) + pow(n, 3);
		if (x%a == 0 && x%b != 0) {
			b = 1;
			break;
		}
	}

	if (b == 1) {
		printf("True\n");
	} else {
		printf("False\n");
	}


	return 0;
}