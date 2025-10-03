#include <stdio.h>

int main()
{
    
    double a1, b1, a2, b2;
    printf("Введите стороны первого прямоуг \n");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);

    printf("Введите стороны второго прямоуг \n");
    printf("a2= "); scanf("%lf", &a2);
    printf("b2= "); scanf("%lf", &b2);

    double s1, s2;
    s1 = a1 * b1;
    s2 = a2 * b2;

    if (s1 < s2)
        printf("max площадь у второго прямоуг, S=%.2f", s2);
    else if (s1>s2)
        printf("max площадь у первого прямоуг, S=%.2f", s1);
    else
        printf("Площади равны \n");

    return 0;



}