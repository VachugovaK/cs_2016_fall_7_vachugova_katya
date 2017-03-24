#include <stdio.h>
#include <locale.h>
#define swap(t,x,y){t; c=a; a = b; b = c;}
int main()
{
	setlocale(0, "Russian");
	int a, b, c;
	printf("Значение x = ");
	scanf("%i", &a);
	printf("Значение y = ");
	scanf("%i", &b);
	swap(c, a, b);
	printf("x=%i y=%i\n", a, b);
	return 0;
}
