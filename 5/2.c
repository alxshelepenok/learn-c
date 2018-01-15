#include <stdio.h>

int main() {
	float u, u_2, u_3, u_4, u_5, u_6, u_2_3, u_4_6, r, r_1, r_2, r_3, r_4, r_5, r_6, r_4_6, r_2_3, i, i_1, i_2, i_3, i_4, i_5, i_6;

	u = 240.0;
	r_1 = 20.0;
	r_2 = 120.0;
	r_3 = 40.0;
	r_4 = 60.0;
	r_5 = 30.0;
	r_6 = 20.0;

	// Вычисление сопротивлений
	r_4_6 = ((r_4 * r_5)/(r_4 + r_5)*r_6)/((r_4 * r_5)/(r_4 + r_5)+r_6);
	r_2_3 = (r_2 * r_3)/(r_2 + r_3);
	r = r_2_3 + r_4_6 + r_1;

	// Вычисление токов
	i = u/r;
	i_1 = i;

	u_2_3 = i * r_2_3;
	u_2 = u_3 = u_2_3;

	i_2 = u_2/r_2;
	i_3 = u_3/r_3;

	u_4_6 = i * r_4_6;
	u_4 = u_5 = u_6 = u_4_6;

	i_4 = u_4/r_4;
	i_5 = u_5/r_5;
	i_6 = u_6/r_6;

	// Вывод результата
	printf("I_1 = %f;\nI_2 = %f;\nI_3 = %f;\nI_4 = %f;\nI_5 = %f;\nI_6 = %f;\n", i_1, i_2, i_3, i_4, i_5, i_6);
}