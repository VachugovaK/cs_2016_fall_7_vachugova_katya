#include <stdio.h>
int main()
{
	int day = 5;
	int month = 4;
	printf("0%i.0%i\n", day, month);
	int none = day;
	day = month;
	month = none;
	printf("0%i.0%i\n", day, month);
	return 0;
}
