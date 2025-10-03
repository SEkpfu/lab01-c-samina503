#include <stdio.h>
int main()
{
    double n1, n2, res;
    char x;

    printf("Введите два числа: ");
    scanf("%lf %lf", &n1, &n2);

    printf("Введите знак: ");
    scanf(" %c", &x);

    switch (x) {
        case '+':
            res = n1 + n2;
            printf("Результат: %.2f\n", res);
            break;
        case '-':
            res = n1 - n2;
            printf("Результат: %.2f\n", res);
            break;
        case '*':
            res = n1 * n2;
            printf("Результат: %.2f\n", res);
            break;
        default:
            printf("Некорректный знак операции.\n");
    }
    return 0;
}