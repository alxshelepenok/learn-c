#include <stdio.h>
#include <math.h>

int main() {
	int n, m, k, z;
	float x, y;

	printf("Введите переменные n, m, k, z: ");
	scanf("%d %d %d %d", &n, &m, &k, &z);

	if ( z > 0 ) {
		x = z;
	} else if ( z <= 0 ) {
		x = pow(x, 2) + 1;
	}

	y = sin(n*x) + cos(k*x) + log(m*x);

	printf("y = %f\n", y);

	return 0;
}