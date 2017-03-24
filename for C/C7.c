#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "Russian");
	float x, y;
	float c = 1;
	int i = 0;
	char sign = '+';
	while (sign != '0') 
	{
		printf("Введите знак: ");
		scanf("%c%*c", &sign);
		if (sign == '0') { break; }
		if (sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '%' || sign == '^') 
		{
			printf("x=");
			scanf("%f%*c", &x);
			printf("y=");
			scanf("%f%*c", &y);
			float z = ((y * 100) / x);
			switch (sign) {
			case '+':
				printf("%.3f\n", x + y);
				break;
			case '-':
				printf("%.3f\n", x - y);
				break;
			case '*':
				printf("%.3f\n", x * y);
				break;
			case '/':
				if (y != 0) printf("%.3f\n", x / y);
				else printf("Делить на ноль нельзя\n");
				break;
			case '%':
				printf("%.3f\n", z);
				break;
			case '^':
				for (i = 0;i<y;++i)
					c *= x;
				printf("%f\n", c);
			}
		}
		else printf("Неверно указан знак операции\n");
	}
}
