#include <stdio.h>
#include <math.h>

int main()
{
    double x, fx;
    printf("x= "); scanf("%lf", &x);

    if (x<=-2){
        fx=0;
    }   else if(-2<x<=10){
        fx=(x*x) + (4*x) + 5;
    }   else{
        fx = 1/((x*x)+(4*x)-5);
    }

    printf("f(x)=%lf\n", fx);
    return 0;
}