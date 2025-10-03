#include <stdio.h>
int main()
{
    double x, y, z;
    printf("введите три числа:");
    printf("x= "); scanf("%lf", &x);
    printf("y= "); scanf("%lf", &y);
    printf("z= "); scanf("%lf", &z);

    if (x<=0 || y<=0 || z<=0) {
        printf("ошибка");
    return 1;
    }
    if (x+y>z && x+z>y && y+z>x) printf("существует");
    else printf("не существует1");

    return 0;
}