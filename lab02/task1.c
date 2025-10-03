#include <stdio.h>
int main()
{
    double a1, b1, a2, b2;
    printf("Введите стороны первого прямоугольника \n");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);

    printf("Введите стороны второго прямоугольника \n");
    printf("a2= "); scanf("%lf", &a2);
    printf("b2= "); scanf("%lf", &b2);

    double s1, s2;
    s1 = a1 * b1;
    s2 = a2 * b2;

    if(s1>s2)
        printf("макс площ у 1, s = %.2f", s1);
    else
        if (s1=s2)
            printf("площадт равны")
        else
            printf("макс площ у 2, s = %.2f", s2);
    return 0;
    
}