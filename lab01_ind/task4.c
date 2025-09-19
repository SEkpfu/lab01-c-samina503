#include <stdio.h>
#include <locale.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main()
{   

    setlocale(LC_ALL, "");
    double x, y, a, b;
    printf("x= ");
    scanf("%lf", &x);

    
    a = x*x*x*x*x*x*x*x*x*x;
    b = x*x*x*x*x*x;

    y = (x * a) - (x * b) + (x * x) - 2;
    printf("y = %f\n", y);
    return 0;

}