#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    printf("x= "); scanf("%lf", &x);
    printf("y= "); scanf("%lf", &y);

    double r_v = 3;
    double r_s = 6;
    double dist = sqrt(x*x + y*y);

    if (x>=0 && dist >=r_v && dist <= r_s) printf("принадлежит");
    else printf("не принадлежит1");

    return 0;

}