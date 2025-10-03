#include <stdio.h>

int main()
{
    int x;
    printf("Введите свою оценку: ");
    scanf("%d", &x);

    switch (x) {
        case 5: printf("отлично"); break;
        case 4: printf("хорошо"); 
        case 3: printf("удовлетварительно"); break;
        case 2:
        case 1: printf("плохо"); break;
        default: printf("неверные данные");
    }
    return 0;

}