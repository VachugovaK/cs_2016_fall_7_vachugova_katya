#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "russian");
	int k;
	printf("Введите натуральное число: ");
	scanf("%i", &k);
	
	if (k == 0)
	{
		printf("Факториал числа: 1");
		return 0;
	}
	else if (k < 0)
	{
		printf("Факториала данного числа не существует");
		return 0;
	}
	else {
		int K = 1;
		while (k >= 1)
		{
			K *= k;
			k--;
		}
		printf("Факториал числа: %i\n", K);
	}
	return 0;
}
