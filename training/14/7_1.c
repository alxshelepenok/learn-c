#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Enter size of matrix: \n");

	int m;
	printf("M = ");
	scanf("%d", &m);

	int n;
	printf("N = ");
	scanf("%d", &n);

	int i, j, arr[m][n];
	srand(time(NULL));
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = 1+rand()%9;
		}
	}

	printf("Ok, random matrix: \n");
	for (i = 0; i < m; i++) {
		printf("| ");
		for (j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("|\n");
	}

	int k;
	printf("Enter number, K = ");
	scanf("%d", &k);

	int count = 0;
	int multipl = 1;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (arr[i][j] % k == 0) {
				multipl *= arr[i][j];
				count++;
			}
		}
	}

	if (count != 0) {
		printf("Result: MULTIPL = %d\n", multipl);
	} else {
		printf("Result: numbers not found!\n");
	}

	return 0;
}
