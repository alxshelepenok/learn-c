#include <stdio.h>

int main()
{
    int n, x, l;
    printf("Введите число N: \n");
    scanf("%d", &n);

    x = n%10;

    switch(x) {
      case 0: case 1:
      case 5: case 6:  l = x; break;
      case 2: case 8:  l = 4; break;
      case 3: case 7:  l = 9; break;
      case 4: l = 6; break;
      case 9: l = 1; break;
    }

    printf("Последняя цифра квадрата X = %d\n", l);

    return 0;
}
