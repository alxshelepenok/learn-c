#include <stdio.h>
#include <math.h>

int main() {
	int a;
	float z_1, z_2;

	printf("Введите переменную A: ");
	scanf("%d", &a);

	z_1 = (sin(2*a)+sin(5*a)-sin(3*a)) / (cos(a) + 1 - 2 * pow(sin(2*a), 2));
	z_2 = 2 * sin(a);

	printf("Z_1 = %f;\nZ_2 = %f;\n", z_1, z_2);

	return 0;
}