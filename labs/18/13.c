#include <stdio.h>
#include <math.h>

int main() {
	// Координаты вершин
	int x_a, y_a, x_b, y_b, x_c, y_c;

	// Координаты точки
	int x_d, y_d;

	// Вектора
	int vectA, vectB, vectC;

	// Буффер
	float buf;

	// Указатель на буффер
	float *pointer = &buf;

	printf("Введите точку для треугольника A(0,0) B(10,0) C(4,2): \n");
	scanf("%d %d", &x_d, &y_d);

	// Координаты вершин
	x_a = 0;
	y_a = 0;

	vectA = (x_a - x_d) * (y_b - y_a) - (x_b - x_a) * (y_a - y_d);

	x_b = 10;
	y_b = 0;

	vectB = (x_b - x_d) * (y_c - y_b) - (x_c - x_b) * (y_b - y_d);

	x_c = 5;
	y_c = 10;

	vectC = (x_c - x_d) * (y_a - y_c) - (x_a - x_c) * (y_c - y_d);


            if ((vectA >= 0 && vectB >= 0 && vectC >= 0) || (vectA <= 0 && vectB <= 0 && vectC <= 0)) {
            		printf("Принадлежит треугольнику!\n");
            } else {
            		printf("Не принадлежит треугольнику!\n")
            }
	
	return 0;
}