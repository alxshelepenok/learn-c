#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Function randInt gets random number
 *
 * @param int min
 * @param int max
 * @return int number 
 */
int randInt(int min, int max) {
	return min + rand() % max;
}

int main() {
	int *arr;
	double *newArr;
	int i, j, n, m, sum, num, numCount, count;

	srand(time(NULL));

	printf("Enter size of array: ");
	scanf("%d %d", &n, &m);

	arr = (int*)malloc(n*m*sizeof(int));
	newArr = (double*)malloc(n*m*sizeof(double));

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			*(arr+i*m+j) = randInt(1, 999);
	    	}
	}

	printf("Array: \n");
	for (i = 0; i < n; i++) {
		printf("| ");
		for (j = 0; j < m; j++) {
			printf("%d ", *(arr+i*m+j));
		}
		printf("|\n");
	}

	count = 0;

	for (j = 0; j < m; j++) {
		for (i = 0; i < n; i++) {
			if (j > 0 && j%2 == 0) {
				sum = 0;
				numCount = 0;
				num = *(arr+i*m+j);
				while(num != 0) {
					sum += num%10;
					num = num/10;
					numCount++;
				}

				*(newArr+count) = (double)sum/numCount;
				count++;				
			}
		}
	}

	if (count != 0) {
		printf("New array: [");
		for (i = 0; i < count; i++) {
			printf(" %lf ", *(newArr+i));
		}
		printf("]\n");
	} else {
		printf("Elements not found!\n", count);
	}
  
	free(arr);
	free(newArr);

	return 0;
}