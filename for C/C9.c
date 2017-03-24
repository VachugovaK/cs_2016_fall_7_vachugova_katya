#include <stdio.h>
#include <locale.h>

int fib(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return fib(n - 2) + fib(n - 1);
	}
}

int main()
{
	setlocale(0, "Russian");
	int n = 0;
	int i = 0;
	printf("Введите натуральное число первых N чисел Фибоначчи:\n");
	scanf("%i", &n);
	for (i = 0;i <= n;++i)
	{
		printf("(%i) %i\n", i, fib(i));
	}
	return 0;
}
