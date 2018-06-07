#include <stdio.h>
#include <string.h>

int main() {
	int i, count, isFound, inWord, position; 
	char s[] = "word*word1   word2 word3 word4\nword5\nword6";

	printf("Исходная строка: %s\n", s);

	i = 0;
	isFound = 0;
	position = 0;

	while (s[i] != '\0') {
		if (s[i] == '*') {
			position = i;
			isFound = 1;
			break;
		}

		i++;
	}

	if (isFound != 1) {
		printf("Звёздочка не найдена.\n");
	} else {
		i = position + 1;
		count = 0;
		inWord = 0;

		// Проходимся по символам начиная с индекса после звёздочки
		// С помощью switch выбираем действие, в зависимости от символа

		// Если символ не равен пробелу, то определяем как последовательность символов
		// Когда пробел достигнут, то определяем, что последовательность закончилась и увеличиваем счётчик слов.
		do switch(s[i]) {
			case '\0':
			case ' ': case '\t': case '\n': case '\r':
				if (inWord) {
					inWord = 0;
					count++;
				}
				break;
			default: inWord = 1;
		} while(s[i++]);

		printf("Нашли %d слов.\n", count);
	}
}