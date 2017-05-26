#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
float f(float x)
{
    float z;
    z=5*x;
    return(z);
}
double integral(double a, double b, int n)
{
    int i=1;
    double c=0.0, ig=0.0, s=0.0, s1=0.0, r=0.0;
    r=(b-a)/n;
    c=a;
    do {
            c=c+r;
                if(i%2!=0)
                {
                    s=s+f(c);
                }
                else
                {
                    s1=s1+f(c);
                }
                i++;

    } while(c<b);
    ig=r/3*(f(a)+f(b)+4*s+2*s1);
    return ig;
}
int main()
{
    double o1,o2;
    int k;
    setlocale(LC_ALL,"Russian");
    printf("Функция y=5x\nВведите начало диапазона\n");
    scanf("%lf",&o1);
    printf("Введите конец диапазона\n");
    scanf("%lf",&o2);
    printf("Введите  количество разбиений\n");
    scanf("%i",&k);
    printf("Интеграл = %lf\n",integral(o1,o2,k));
    return 0;
}
