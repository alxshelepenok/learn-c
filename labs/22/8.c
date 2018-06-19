#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Function randInt return random number
 *
 * @param int min
 * @param int max
 * @return int number 
 */
int randInt(int min, int max) {
	return min + rand() % max;
}

/**
 * Function getMinAndMaxFromANumber get min and max from a number
 *
 * @param int num
 * @param int *min
 * @param int *max
 */
void getMinAndMaxFromANumber(int num, int *min, int *max) {
	*min = 9;
	*max = 0;

	while(num != 0) {
		if (num%10 < *min) {
			*min = num%10;
		}

		if (num%10 > *max) {
			*max = num%10;
		}

		num = num/10;
	}
}

int main() {
	srand(time(NULL));

	int i, arr[10];

	for (i = 0; i < 10; i++) {
		arr[i] = randInt(0, 999);
	}

	int min, max;
	for (i = 0; i < 10; i++) {
		getMinAndMaxFromANumber(arr[i], &min, &max);
		printf("%d: min=%d, max=%d\n", arr[i], min, max);
	}

	return 0;
}