#include <stdio.h>

int main() {
	int dw, y, m, d, c;

	printf("Введите дату в формате YYYY-MM-DD: \n");
	scanf("%d-%d-%d", &y, &m, &d);

	// Проверка значений ввода
	// Если год, месяц или день выходит за границы, то показываем сообщение и выходим из функции
	if (y <= 0 || m > 12 || m <= 0 || d > 31 || d <= 0) {
		printf("Вероятно, вы допустили ошибку.\n");
		return 0;
	}

	// Получение столетий
	c = y/100;

	// Получение колличества лет текущего столетия
	y = y - c*100;

	// Преобразование в римский календарь
	m = m + 12 * ((14 - m)/12) - 2;

	// Вычисление дня недели
	dw = (d + ((13*m - 1)/5) + y + (y/4 + c/4 - 2*c + 777))%7;

	switch(dw) {
		case 0:
			printf("Воскресенье\n");
			break;
		case 1:
			printf("Понедельник\n");
			break;
		case 2:
			printf("Вторник\n");
			break;
		case 3:
			printf("Среда\n");
			break;
		case 4:
			printf("Четверг\n");
			break;
		case 5:
			printf("Пятница\n");
			break;
		case 6:
			printf("Суббота\n");
			break;
	}

	return 0;
}