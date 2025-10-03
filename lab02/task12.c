#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    int x;
    x = a + b + c;
    (x > 10) ? printf("%d", x) : printf("Сумма меньше 10");

    int chet;
    chet += (a % 2) == 0 ? 1 : 0; 
    chet += (b % 2) == 0 ? 1 : 0; 
    chet += (c % 2) == 0 ? 1 : 0; 
    printf("Количество четных чисел:%d", chet);

    double max1,min1, sred;
    max1 == a > b ? a : b;
    max1 == b > c ? b : c; 
    min1== a > b ? a : b;
    min1 == b > c ? b : c;
    sred = (a < max1 && a > min1) ? a : (b < max1 && b > min1) ? b : c;
    printf("Среднее из этих чисел:%f",sred);

    int nc, nb;
    int ABC[3] = {a, b, c};
    int min = ABC[0];
    for(int i = 0; i < 5; ++i)
{
    if(ABC[3] < min)
    {
        min = ABC[i];
    }
} 
nb = min + 1;
printf("Наименьший элемент в массиве: %d", nb);

return 0;
}    