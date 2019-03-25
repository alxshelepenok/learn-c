#include <stdio.h>

const int N = 5;

int main() {
	int i, arr[N];
	printf("Enter elements of array: \n");
	for (i = 0; i < N; i++) {
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	if (arr[0] > 0) {
		printf("Result: arr[0] > 0 \n");
	} else {
		int count = 0;
		int multipl = 1;

		for (i = 0; i < N; i++) {
			if (arr[i] > 0) {
				break;
			}

			multipl *= arr[i];
			count++;
		}

		printf("Result: MULTIPL = %d, COUNT = %d\n", multipl, count);
	}

	return 0;
}
