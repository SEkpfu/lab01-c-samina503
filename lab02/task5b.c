#include <stdio.h>



int main() 
{
    double X, Y, Z, a, b;

    printf("Введите размеры кирпича X, Y, Z: ");
    scanf("%lf %lf %lf", &X, &Y, &Z);
    printf("Введите размеры отверстия a и b: ");
    scanf("%lf %lf", &a, &b);

    double s1, s2;
    s1= X * Y * Z;
    s2= a*b;

    if (s1<s2) {
        printf("Кирпич пройдет через отверстие.\n");
    } else {
        printf("Кирпич не пройдет через отверстие.\n");
    }

    return 0;
}