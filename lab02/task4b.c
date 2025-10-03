#include <stdio.h>

int main()
{
    int dM, dW;
    printf("Введите дату: \n");
    printf("dM= "); scanf("%d", &dM);
    printf("dW= "); scanf("%d", &dW);

    if ((dW==17) && (dM==5))
      printf("осторожно, сегодня пятница 17-е. \n");

    return 0;
}
