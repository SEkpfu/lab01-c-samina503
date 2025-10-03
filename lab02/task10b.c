#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z;
    printf("введите три числа:");
    printf("x= "); scanf("%lf", &x);
    printf("y= "); scanf("%lf", &y);
    printf("z= "); scanf("%lf", &z);

    if (x<=0 || y<=0 || z<=0) printf("ошибка0");
    else if (x==y && y==z && x==z) printf("равносторонний1");
    else if (x==y || x==z || y==z) printf("равнобедренный2");
    else if (sqrt(x*x + y*y) == z || sqrt(y*y + z*z) == x || sqrt (x*x + z*z) == y) printf("прямоугольный3");
    else printf("треугольник обычный01");

    return 0;
}