#include <stdio.h>
#include <string.h>
#include <locale.h>
int main()
{
	setlocale(0, "Russian");
	char ascii[1000];
	int asc[1000], bol;
	bol = asc[0];
	printf("Введите строку на английском:\n");
	gets(ascii);
	int dl = strlen(ascii);
	int i=0;
	for (i = 0;i<dl;i++) 
	{
		asc[i] = (int)ascii[i];
		if (bol<asc[i])
			bol = asc[i];
	}
	printf("Наибольший ASCII код - %c\n", (char)bol);
	return 0;
}
