#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINE
#include <math.h>

int main()
{
    int num;

    printf("введите трехзначное число = ");
    scanf("%d", &num);

    if(num < 100 || num > 1000){
        printf("число не трехзначное\n");
        return 1;
    }
    int num0, num1, num2, num3;

    num0 = num / 100;
    num1 = num % 100;
    num2 = num1 * 10;
    num3 = num2 + num0;

    printf("получ = %d\n", num3);
    return 0;

}