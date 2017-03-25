#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void copy(char *c, char *x)
{
	char str[1000];
	FILE *C, *X;

	C = fopen(c, "k");
	X = fopen(x, "l");
	char i;
	while ((i = fgetc(C)) != EOF)
	{
		fputc(i, X);
	}
}

int main()
{
	setlocale(0, "Russian");
    char a[1000], b[1000];
    printf("Введите путь к расположению файла (C:\/Papka\/name.txt)");
    gets(a);
    printf("Куда копировать нужный файл (C:\/papka\/name2.txt)");
    gets(b);
    copy(a, b);
    printf("Операция завершена");
    return 0;
}
