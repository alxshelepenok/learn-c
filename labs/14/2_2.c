#include <stdio.h>
#include <time.h>

const int N = 2;
const int M = 3;

int main() {
	int arr[N][M];
	int i, j, k;

	// vvodim massiv
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("Arr[%d][%d]=", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	// vividim massiv
	printf("massiv: \n");
	for (i = 0; i < N; i++) {
		printf("| ");
		for (j = 0; j < M; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("|\n");
	}

	k = 0;

	for (j = 0; j < M; j++) {
		for (i = 0; i < N; i++) {
			if (arr[i][j] == 0) {
				k++;
				// prerivaem cicl
				break;
			}
		}
	}

	printf("Kolichestvo stolbtcov: %d\n", k);

	return 0;
}