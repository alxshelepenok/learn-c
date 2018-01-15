#include <stdio.h>
#include <math.h>

int main() {
	int a, b, z;
	float y, x;

	printf("Введите переменные A, B и Z: ");
	scanf("%d %d", &a, &b, &z);

	if (z < 1) {
		x = z;
	} else if (z >= 1) {
		x = pow(z, 3.0/2.0);
	}

	y = -M_PI * x + a*pow(cos(pow(x, 3)), 2) + b*pow(sin(pow(x, 2)), 3);

	printf("Y= %f\n", y);
	
	return 0;
}