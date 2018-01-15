#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	float d, x1, x2;

	printf("Введите A, B, C для уравнения ax^2 + bx + c = 0: \n");
	scanf("%d %d %d", &a, &b, &c);

	d = b*b - 4*a*c;

	if (d > 0) {
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		printf("Корень X1: %f Корень X2: %f\n", x1, x2);
	} else if (d == 0) {
		x1 = -b/(2*a);
		printf("Корень X1: %f\n", x1);
	} else if (d < 0) {
		printf("Уравнение %dx^2+%dx+%d не имеет вещественных корней\n", a, b, c);
	}

	return 0;
}