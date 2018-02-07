#include <stdio.h>

const N = 5;

int main() {
	int i, arr[N], m;

	for (i=0; i<N; i++) {
		scanf("%d", &arr[i]);
	}

	for (i=0; i<N; i++) {
		if (i%2 != 0) {
			m *= arr[i];
		}
	}

	printf("M = %d", m);

	return 0;
}