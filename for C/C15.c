#include <stdio.h>
#include <string.h>
#include <locale.h>
int main()
{
	setlocale(0, "Russian");
	int i=0, j = 0;
	char a[1000], b[1000];
	printf("Введите вашу строку:\n");
	gets(a);
	b[j] = a[i];
	for (i = 0;a[i] != '\0';i++)
	{
		if (a[i - 1] != a[i]) {
			b[j] = a[i];
			printf("%c", b[j]);
			j++;
		}
	} printf("\n");
	return 0;
}
