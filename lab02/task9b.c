#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    const double r = 5.0;
    printf("x= "); scanf("%lf", &x);
    printf("y= "); scanf("%lf", &y);

    if (y >= 0 && x*x + y*y <= r*r) printf("принадлежит");
    else printf("не принадлежит1");

    return 0;

}