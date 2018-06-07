#include <stdio.h>
#include <time.h>

const int N = 2;
const int M = 2;

int main() {
	int arr[N][M];
	int i, j, sum, k;
	float avg;

	k = 0;
	sum = 0;
	avg = 0;

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("arr[%d][%d]=", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
	     		if (arr[i][j]%2 != 0) {
	     			sum += arr[i][j];
	     			k++;
	     		}
		}
	}

	if (k > 0) {
		avg = (float)sum/k;
		printf("Srednee = %f\n", avg);
	} else {
		printf("Znacheniy net.");
	}

	return 0;
}