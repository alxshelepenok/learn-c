#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

const int N = 4;

int main() {
	float arr[N];
	int i, count, approximateID;
	float sum, avg, def;

	srand(time(NULL));

	avg = 0;
	sum = 0;
	count = 0;
	approximateID = 0;

	for (i = 0; i < N; i++) {
	    arr[i] = (float)(rand())/RAND_MAX*(100.0-1.0)+1.0;
	}

	printf("Массив: [");
	for (i = 0; i < N; i++) {
		printf(" %f ", arr[i]);
     		sum += arr[i];
     		count++;
  
	}
	printf("]\n");

	avg = sum/count;
	printf("Среднее = %f\n", avg);

	for (i = 0; i < N; i++) {
		if (fabs(avg - arr[approximateID]) > fabs(avg - arr[i])) {
			approximateID = i;
		}
	}

	printf("Ближайшее = %f\n", arr[approximateID]);

	return 0;
}