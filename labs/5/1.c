#include <stdio.h>

int main() {
	float u, u_2, u_3, u_2_3;
	float r, r_1, r_2, r_3, r_2_3;
	float i, i_1, i_2, i_3;

	u = 60;

	r_1 = 7;
	r_2 = 12;
	r_3 = 4;

	r_2_3 = (r_2 * r_3) / (r_2 + r_3);
	r = r_1 + r_2_3;

	i = u / r;
	i_1 = i;

	u_2_3 = i * r_2_3;
	u_2 = u_3 = u_2_3;

	i_2 = u_2 / r_2;
	i_3 = u_3 / r_3;

	printf("I_1 = %f;\nI_2 = %f;\nI_3 = %f;\n", i_1, i_2, i_3);

	return 0;
}