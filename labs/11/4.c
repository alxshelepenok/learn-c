#include <math.h> 
#include <stdio.h>

int main() { 
int n, i, j, k, f; 

printf("Введите N для [2..N]: \n"); 
scanf("%d", &n); 
k = 0;

for(i=2; i<=n; i++) { 
	f = 1;

	for(j=2; j<=i/2; j++) { 
		if (i%j == 0) {
			f = 0;
			break;
		}
	} 

	if (f == 1) {
		k++; 
		printf("Найдено простое число: %d\n", i);
	}
} 

printf("Колличество простых чисел: %d\n", k); 

return 0;
}