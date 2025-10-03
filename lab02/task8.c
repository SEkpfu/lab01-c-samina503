#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, dist;
    int zone;
    printf("введите x= "); scanf("%lf", &x);
    printf("введите y= "); scanf("%lf", &y);

    dist = sqrt(x*x + y*y);

    if (dist <= 2.0) zone=10;
    else if (dist <= 4.0 && dist >= 2.0) zone=5;
    else zone=0;


    switch(zone) {
        case 10: printf("10 очков"); break;
        case 5: printf("5 очков"); break;
        case 0: printf("0 очков"); break;
    }

    return 0;

    

}