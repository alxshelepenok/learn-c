#include <stdio.h>
#include <math.h>

int main() {
	float rintA, rintB, rintC, a, b, c, x_1, x_2, x_3, y_1, y_2, y_3;  

	printf("Введите точку 1: "); 
	scanf("%f,%f", &x_1, &y_1); 

	printf("Введите точку 2: "); 
	scanf("%f,%f", &x_2, &y_2); 

	printf("Введите точку 3: "); 
	scanf("%f,%f", &x_3, &y_3); 

	a = sqrt((x_2 - x_1) * (x_2 - x_1) + (y_2 - y_1) * (y_2 - y_1));
	printf("%f\n", a); 

	b = sqrt((x_3 - x_1) * (x_3 - x_1) + (y_3 - y_1) * (y_3 - y_1));
	printf("%f\n", b); 

	c = sqrt((x_3 - x_2) * (x_3 - x_2) + (y_3 - y_2) * (y_3 - y_2));
	printf("%f\n", c); 

	if(a == b && b == c) {
		printf("Равносторонний"); 
	} else {
		rintA = rint(pow(a, 2));
		rintB = rint(pow(b, 2));
		rintC = rint(pow(c, 2));

		if(rintC == (rintA + rintB) || rintB == (rintA + rintC) || rintA == (rintC + rintB) ) { 
			printf("Прямоугольный."); 
		} else {
			printf("Другой.");
		}
	}

	return 0;
}
