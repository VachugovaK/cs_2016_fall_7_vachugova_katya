#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "russian");
	float t1, t2, k, C;
	printf("Укажите диапазон градусов Цельсия в формате t1-t2 и шаг k: ");
	scanf("%f-%f %f", &t1, &t2, &k);
	C = t1;
	float F;
	do
	{
		F = (C*1.8) + 32;
		printf("C=%f\t F=%f\n", C, F);
		C = C + k;
	} 
	while (C <= t2);
	return 0;
}
