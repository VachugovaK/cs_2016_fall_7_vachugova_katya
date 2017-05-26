#include <stdio.h>
#include <locale.h>
#include <math.h>
float f(float x)
{
    float z;
    z=x*x;
    return(z);
}

void Dif(float a,float b,float n)
{
    float dif3 = 0,xi=0;
    int i;
    printf("%f\n",1/(2*n)*(-3*f(a)+4*f(a+n)-f(a+2*n)));
    printf("%f\n",1/(2*n)*(f(a+2*n)-f(a)));
    xi=a;
    while(xi<b)
        {
            printf("%f\n",1/(2*n)*(f(xi)-4*f(xi+n)+3*f(xi+2*n)));
            xi=xi+n;
        }
}
int main(void)
{
    double o1,o2,k;
    setlocale(LC_ALL,"Russian");
    printf("Функция z=x^2\nвведите начало диапазона\n");
    scanf("%lf",&o1);
    printf("Введите конец диапазона\n");
    scanf("%lf",&o2);
    printf("Введите шаг\n");
    scanf("%lf",&k);
    Dif(o1,o2,k);
    return 0;
}
