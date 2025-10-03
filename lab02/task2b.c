#include <stdio.h>

int main()
{
    int x;
    printf("x= "); scanf("%d", &x);

    if (x%2==0){
        printf("число четное\n");
    }   else{
        printf("число нечетное\n");
    }

    return 0;
}