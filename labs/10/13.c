#include <stdio.h>
#include <math.h>

int main() {
	float v, x, l;

	x = -0.2;

	while (x <= 1.0) {
		v = tan(2*x) + sin(x);
		printf("f(%f) = %f;\n", x, v);
		x += 0.2;
	}

	return 0;
}