#include <stdio.h>
#include <math.h>

int main() {
	float x, y, z, v;

	x = 3.74 * pow(10, -2);
	y = -0.825;
	z = 0.16 * pow(10, 2);

	v = ((1+pow(sin(x+y), 2)) / fabs(x- ((2*y)/1+pow(x,2)*pow(y, 2) ) ) * pow(x, fabs(y)) + pow(cos(atan(1/z)), 2));

	printf("V = %.4f;\n", v);

	return 0;
}