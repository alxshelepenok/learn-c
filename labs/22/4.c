#include <stdio.h>
#include <math.h>

long int factorial(int n) {
	long int f = 1;

	while(n >= 1) {
		f *= n;
		n = n - 1;
	}

	return f;
}

int main() {
	int i, m, n;
	long int sum = 0;

	printf("Enter interval: ");
	scanf("%d %d", &m, &n);

	for (i = m; i < n; i++) {
		if (i%2 != 0) {
			sum += factorial(i);
		}
	}

	printf("Factorial sum: %ld\n", sum);
	
	return 0;
}