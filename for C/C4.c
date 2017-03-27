#include <stdio.h>
#include <locale.h>
#define swap(t,x,y){t сop; cop=a; a = b; b = cop;}
int main()
{
	setlocale(0, "Russian");
	int a, b;
	printf("Значение x = ");
	scanf("%i", &a);
	printf("Значение y = ");
	scanf("%i", &b);
	swap(int, a, b);
	printf("x=%i y=%i\n", a, b);
	return 0;
}
