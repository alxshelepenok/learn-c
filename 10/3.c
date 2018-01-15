#include <stdio.h>
#include <math.h>

int main() {
	float a, n;
	int i;

	printf("Введите вещественное число А: \n");
	scanf("%f", &a);

	n = 1;
	i = 2;

	while (n < a) {
		n = n + (1.0/i);
		i++;
	}

	printf("%f > %f", n, a);
	
	return 0;
}