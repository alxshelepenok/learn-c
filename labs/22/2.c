#include <stdio.h>

/**
 * Function Сompose calculate sum of a number
 *
 * @param int number
 * @return int sum
 */
int Compose(int n) {
	int s = 0;

	while(n != 0) {
		s += n%10;
		n = n/10;
	}

	return s;
}

int main() {
	int i, n, sum, count;

	printf("Enter a number: ");
	scanf("%d", &n);

	count = 0;
	sum = Compose(n);

	for (i=0; i <= n-1; i++) {
		if (sum == Compose(i)) {
			printf("%d\n", i);
			count++;
		}
	}

	if (count == 0) {
		printf("Numbers not found!\n");
	}
	
	return 0;
}