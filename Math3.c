#include<stdio.h>
int main()
{
    double a,b,c,d;
    printf("x+y=");
    scanf("%lf",&a);
    printf("x-y=");
    scanf("%lf",&b);
    c=(a+b)/2;
    d=(a-b)/2;
    printf("x=%lf\ny=%lf",c,d);
    return 0;
}
