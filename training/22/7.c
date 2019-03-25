#include <stdio.h>
#include <math.h>
#include <malloc.h>

/**
 * Функция calcDist вычисляет расстояние между двумя точками на плоскости.
 *
 */
int calcDist(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

const int AMOUNT_POINTS = 5;

int main() {
	// Окружность представлена в виде вектора,
	// Первый элемент вектора - радиус окружности, второй и третий - координаты центра.
	int *circle = (int*)malloc(3*sizeof(int));
	printf("Enter radius of circle: ");
	scanf("%d", (circle+0));

	printf("Enter cords(x, y): ");
	scanf("%d %d", (circle+1), (circle+2));

	// Точки представлены как двумерный массив с двумя столбцами.
	int *points = (int*)malloc(AMOUNT_POINTS*2*sizeof(int));
	printf("Enter points: \n");

	int i;
	for (i = 0; i < AMOUNT_POINTS; i++) {
		printf("[%d]: ", i);
		scanf("%d %d", (points+i*2+0), (points+i*2+1)); 
	}
	
	printf("Result:\n");
	int dist;
	for (i = 0; i < AMOUNT_POINTS; i++) {
		printf("[%d, %d] ", *(points+i*2+0), *(points+i*2+1));
		dist = calcDist(*(circle+1), *(circle+2), *(points+i*2+0), *(points+i*2+1));
		if (dist < *(circle+0)) {
			printf("will fill!\n");
		} else {
			printf("will not fill!\n");
		}
	} 

	return 0;
}