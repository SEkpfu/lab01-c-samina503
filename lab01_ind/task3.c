#include <stdio.h>
#include <locale.h>

int max(int x, int y) {
    return (x > y)? x : y;
}

int main()
{
    int a, b, c;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);

    int sum = a + b + c;
    int p = a * b * c;
    printf("сумма = %f\n", sum);
    printf("произведение = %f\n", p);

    // int z = (2>3)? -7 : 189;   оператор if
    (sum % 2 == 0)? printf("S = %d, %d", sum, p) : printf("R = %d", max(b, c));
    

    return 0;


    
}