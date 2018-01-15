#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	float z_1, z_2;

	printf("Введите переменные a и b через пробел:\n");
	scanf("%d %d", &a, &b);

	z_1 = (sin(a) + cos(2*b-a))/(cos(a)-sin(2*b-a));
	z_2 = (1 + sin(2*b))/cos(2*b);

	printf("Z1 = %f, Z2 = %f\n", z_1, z_2);

	return 0;
}