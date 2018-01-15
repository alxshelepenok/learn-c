#include <stdio.h>

int main()
{
	int i, j;

	for (i=9; i>=4; i--) {
		printf("\n");

		for (j=1; j<=10; j++) {
			printf("%d*%d = %d\n", i , j, i*j);
		}
	}

	return 0;
}