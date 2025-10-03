#include <stdio.h>
int main()
{
    double a1, a2, a3, b1, b2, b3;
    printf("Введите стороны первого прям \n");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);

    printf("Введите стороны второго прям \n");
    printf("a2= "); scanf("%lf", &a2);
    printf("b2= "); scanf("%lf", &b2);

    printf("Введите стороны третьего прям \n");
    printf("a3= "); scanf("%lf", &a3);
    printf("b3= "); scanf("%lf", &b3);

    double s1, s2, s3;
    s1=a1*b1;
    s2=a2*b2;
    s3=a3*b3;

    if (s1>s2>s3){
        printf("макс площ у первого, S=%.2f", s1);
    } else if(s2> s1> s3){
            printf("макс площ у второго, S=%.2f", s2);
    } else if(s3>s1>s2){
            printf("макс площ у третьего, S=%.2f", s3);

    }

    if (s1>s2>s3) {
        printf("макс площ у первого, S=%.2f", s1);
    }   else if(s2>s3) {
        printf("макс площ у второго, S=%.2f", s2);
    }   else {
        printf("макс площ у третьего, S=%.2f", s3);
    }
        
    return 0;
}