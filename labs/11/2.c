#include <stdio.h>
#include <math.h>

int main() {
	int r, x, y, k;

	printf("Введите R: ");
	scanf("%d", &r);

	k = 0;

	if (r >= 0) {
		for (x = -r; x<r; x++) {
			for (y = -r; y<r; y++) {
				if (pow(x, 2) + pow(y, 2) <= pow(r,2)) {
					k++;
				}
			}
		}

		printf("Колличество точек = %d\n", k);
	} else {
		printf("R меньше нуля!\n");
	}

	return 0;
}