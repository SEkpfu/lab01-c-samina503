#include <stdio.h>
#include <locale.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    double a, b, c, P, S;
    printf("a= ");
    scanf("%lf", &a);
    printf("b= ");
    scanf("%lf", &b);

    c = sqrt((a * a) + (b * b));
    P = a + b + c;
    S = (a * b) / 2;

    printf("гипотенуза = %f\n", c);
    printf("периметр = %f\n", P);
    printf("площадь = %f\n", S);
    return 0;
    

}