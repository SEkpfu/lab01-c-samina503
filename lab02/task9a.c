#include <stdio.h>

int main()
{
    double x, y;
    printf("x= "); scanf("%lf", &x);
    printf("y= "); scanf("%lf", &y);

    if (x>=-2.0 && x<=0.0 && y>=0.0 && y<=1.0) printf("принадлежит");
    else printf("не принадлежит1");

    return 0;

}