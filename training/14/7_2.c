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
			arr[i][j] = rand()%9-2;
		}
	}

	printf("Ok, random matrix: \n");
	for (i = 0; i < m; i++) {
		printf("| ");
		for (j = 0; j < n; j++) {
			if (arr[i][j] >= 0) {
				printf(" %d ", arr[i][j]);
			} else {
				printf("%d ", arr[i][j]);
			}
		}
		printf("|\n");
	}

	int sum, lock;
	int count = 0;

	printf("Result:\n");
	for (i = 0; i < m; i++) {
		sum = 0;
		lock = 1;

		for (j = 0; j < n; j++) {
			if (arr[i][j] < 0) {
				lock = 0;
			}

			sum += arr[i][j];
		}

		if (lock != 1) {
			printf("SUM(%d) = %d\n", i, sum);
			count++;
		}
	}

	if (count == 0) {
		printf("Strings not found, try again.\n");
	}

	return 0;
}
