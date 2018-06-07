#include <stdio.h>
#include <string.h>

int main() {
	char s[50];
	int i = 0, f = 0, count = 0; 

	printf("Введите строку: ");
	scanf("%s", s);

	// Поиск звездочки
	while (s[i] != '\0') {
		if (s[i] == '*') {
			f = 1;
		}

		i++;
	}

	// Если звездочка найдена
	if (f != 1) {
		printf("Условие не выполнено.\n");
	} else {
		i = 0;

		// То проверяем все символы до первой "*"
		while (s[i] != '*') {
			if (s[i] >= '0' && s[i] <= '9') {
				count++;
			}

			i++;
		}

		printf("Нашли %d цифр.\n", count);
	}
}