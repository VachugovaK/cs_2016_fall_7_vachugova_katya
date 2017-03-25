#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double f(double *a, int n)
{
	int i;

	double min = a[1];
	double max = a[1];
	for (i = 0;i<n;i++) {
		if (a[i]>max) { max = a[i]; }
		if (a[i]<min) { min = a[i]; }
	}
	return max - min;
}
int main()

{
	setlocale(0, "Russian");
	int i, n;
	printf("Количество элементов:\n");
	scanf("%i", &n);
	double * a = (double *)malloc(n * 8);
	printf("Введите массив: ");
	for (i = 0; i <n; i++)
		scanf("%lf", &a[i]);

	printf("Разность равна: %lf\n", f(a, n));
	return 0;
}
