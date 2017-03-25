#include <stdio.h>
#include <string.h>
#include <locale.h>

char reverse(char *s)
{
	int j = 0, i, z;
	char st[1000];
	z = strlen(s);
	for (i = z - 1;i >= 0;--i)
	{
		st[j] = s[i];
		j++;
	}
	for (i = 0;s[i] != '\0';++i)
	{
		s[i] = st[i];
	}
	return *s;
}
int main()
{
	setlocale(0, "Russian");
	int i;
	char str[1000];
	gets(str);
	reverse(str);
	for (i = 0;str[i] != '\0';++i)
	{
		printf("%c", str[i]);
	} 
	printf("\n");
	return 0;
}
