#include <stdio.h>

int main() {
	int i, j, k;

	for (i = 1; i<= 9; i++) {
		for (j = 0; j<= 9; j++) {
			for (k = 0; k<= 9; k++) {
				if (j != k) {
					printf("%d\n", 100 * i + 10 * j + k);
				}
			}
		}
	}

	return 0;
}