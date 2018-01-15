#include <stdio.h>
#include <math.h>

int main() {
	float x, y, z, f;

	x = 17.421;
	y = 10.365 * pow(10, -3);
	z = 0.828 * pow(10, 5);

	f = (pow(y + pow(x-1, 1/3.0), 1/4.0)) / (fabs(x-y) * (pow(sin(z), 2) + tan(z)));

	printf("F = %f\n", f);

	return 0;
}