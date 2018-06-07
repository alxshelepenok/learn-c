#include <stdio.h>
#include <math.h>

int main() {
	float a, b;

	// Инициализация буфера.
	float buf;

	// Получаем адрес буфера.
	float *pointer = &buf;

	printf("Площать круга: ");
	scanf("%f", pointer);
	a = sqrt(*pointer);

	printf("Площать квадрата: ");
	scanf("%f", pointer);
	b = sqrt((4*(*pointer))/M_PI);

	if (a < b) {
		printf("Поместится\n");
	} else {
		printf("Не поместится\n");
	}
	
	return 0;
}