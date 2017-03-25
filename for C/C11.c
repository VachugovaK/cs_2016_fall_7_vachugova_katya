#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int f(char *a)
{
	int i, j, k = 0;
	j = strlen(a) - 1;

	for (i = 0;a[i] != '\0';++i)
	{
		if (a[i] == '1')
			k = k + pow(2, j);
		j--;
	}
	return k;
}

int main()
{
	setlocale(0, "Russian");
	char s[1000];
	printf("Введите число в двоичном виде:\n");
	gets(s);
	printf("Число в десятичном виде: %i\n", f(s));

	return 0;
}
