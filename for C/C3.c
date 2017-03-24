#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(0, "Russian");
	float a, b, c, d, z, m;
	printf("Введите значения комплексных сопротивлений в виде a+ib c+id:\n");
	scanf("%f+i%f %f+i%f", &a, &b, &c, &d);
	z = (a*a*c + a*c*c + a*d*d + c*b*b) / ((b + d)*(b + d) + (a + c)*(a + c));
	m = (a*a*d + c*c*b + b*b*d + b*d*d) / ((b + d)*(b + d) + (a + c)*(a + c));
	printf("=%.4f + i%.4f\n", z, m);
	return 0;
}
