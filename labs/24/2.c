#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

const int N = 4;

/**
 * Function randDouble gets random number
 *
 * @param double min
 * @param double max
 * @return double number 
 */
double randDouble(double min, double max) {
	return (double)(rand())/RAND_MAX*(max-min)+min;
}

/**
 * Function calcAverage calculate average of array
 *
 * @param double arr[N] array
 * @return double average.
 */
double calcAverage(double arr[N]) {
	int i;
	double s;

	s = 0;

	for (i = 0; i < N; i++) {
     		s += arr[i];
	}

	return s/N;
}

int main() {
	double arr[N];
	int i, nearestID;
	double avg;

	srand(time(NULL));

	for (i = 0; i < N; i++) {
	    arr[i] = randDouble(0, 10);
	}

	printf("Array: [");
	for (i = 0; i < N; i++) {
		printf(" %lf ", arr[i]);
  
	}
	printf("]\n");

	avg = calcAverage(arr);
	printf("Average: %lf\n", avg);

	nearestID = 0;
	for (i = 0; i < N; i++) {
		if (fabs(avg - arr[nearestID]) > fabs(avg - arr[i])) {
			nearestID = i;
		}
	}

	printf("Nearest: %lf\n", arr[nearestID]);

	return 0;
}