#include <math.h>
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINE

double cotangent(double x){
    return cos(x) / sin(x);
}

int main()
{
    double x, y, a, b;
    printf("x=");
    scanf("%lf", &x);
    printf("y=");
    scanf("%lf", &y);
    
    double num = (12*pow(x,2) + 7*x - 5);
    a = 2 * cotangent(3 * x) - (1/num);
    printf("%+.*lf\n", 5, a);
    
    double num2 = y - sqrt(abs(x));
    b = pow(3, x) - 4 * x + num2;
    printf("%+E\n", b);
    return 0;
}
