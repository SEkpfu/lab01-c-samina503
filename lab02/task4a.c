#include <stdio.h>


int main()
{
    int dM, dW;
    printf("Введите дату: \n");
    printf("dM= "); scanf("%d", &dM);
    printf("dW= "); scanf("%d", &dW);


    if (13==dM)
        if (5==dW || 2==dW)
          printf("осторожно, сегодня пятница/вторник 13-е. \n");

    return 0;


}