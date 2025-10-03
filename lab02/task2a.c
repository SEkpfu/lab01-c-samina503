#include <stdio.h>

int main()
{
    int x;
    printf("x= "); scanf("%d", &x);

    if (x>0){
        printf("число положительное\n");
    }   else if (x<0){
        printf("число отрицательное\n");
    }   else{
        printf("число нуль\n");
    }

    return 0;
}