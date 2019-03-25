#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 10;

int main() {
	int i, arr[N];
	srand(time(NULL));
	for (i = 0; i < N; i++) {
	    arr[i] = 0+rand()%100;
	}

	printf("Array: [");
	for (i = 0; i < N; i++) {
		printf(" %d ", arr[i]);
	}
	printf("]\n");

	int j, tmp;
	for(i = 0; i < N - 1; i++) { 
		for(j = 0; j < N - i - 1; j++) {  
			if(arr[j]%10 > arr[j+1]%10) {
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	printf("Result, new array: [");
	for (i = 0; i < N; i++) {
		printf(" %d ", arr[i]);
	}
	printf("]\n");

	return 0;
}