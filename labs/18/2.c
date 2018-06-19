#include <stdio.h>

int main() {
	int result;
	int a, b, c, d;

	int buf;
	int *pointer = &buf;

	printf("Please, enter A, B, C, D: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a != b && a != c && a != d && b != c && b != d && c != d) {
		*pointer = a + b + c + d;
	} else if (a == b && c == d) {
		*pointer = 4*a;
	} else if (a == b && a == c && a == d && b == c && b == d && c == d) {
		*pointer = (a - b) * (c - d);
	}

	// Getting value from a buffer
	result = buf;

	printf("Result = %d\n", result);

	return 0;
}