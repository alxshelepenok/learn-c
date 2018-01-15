#include <stdio.h>

int main()
{
    int n, o, x, c;
    printf("Введите число N: \n");
    scanf("%d", &n);

    c = n/4;
    o = n%4;

    switch(o) {
    	case 0:
                      printf("%d=4*%d\n", n, c);
    		break;
    	case 1:
    		printf("%d=4*%d+1\n", n, c);
    		break;
    	case 2:
    		printf("%d=4*%d+2\n", n, c);
    		break;
    	case 3:
    		printf("%d=4*%d+3\n", n, c);
    		break;
    	default:
    		printf("Остаток n/4 не равен 1, 2 или 3!\n");
    		break;
    }

    return 0;
}
