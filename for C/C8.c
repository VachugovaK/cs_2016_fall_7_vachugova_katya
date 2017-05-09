#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(0, "Russian");
	float a, b, c, D;
	printf("Введите коэффициенты квадратного уравнения через пробел:\n");
	scanf("%f %f %f", &a, &b, &c);
	D = (b*b) - (4 * a * c);
	float x1, x2;
	if (D >= 0)
	{
		if (D == 0)
		{
		x1 = x2 = (-b / (2 * a));
		printf("x1 = x2 = %f", x1);
		}
		else 
		{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		printf("x1 = %f, x2 = %f", x1, x2);
		}
	}
	else
	{
		printf("Вещественных корней нет\n");
	}
	return 0;
}
