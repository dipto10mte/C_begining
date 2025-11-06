#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,d,x,y;
    printf("If a1x+b1y=c1 and a2x=b2y=c2. Then enter the values of a1,a2,b1,b2,c1,c2.\n");
    printf("a1=");
    scanf("%lf",&a1);
    printf("a2=");
    scanf("%lf",&a2);
    printf("b1=");
    scanf("%lf",&b1);
    printf("b2=");
    scanf("%lf",&b2);
    printf("c1=");
    scanf("%lf",&c1);
    printf("c2=");
    scanf("%lf",&c2);
    d=a1*b2-a2*b1;
    x=(b2*c1-b1*c2)/d;
    y=(a1*c2-a2*c1)/d;
    if(d==0)
    {
        printf("Value of x & y can't be determined.");
    }
    else
    {
        printf("The result is (x,y)=(%lf,%lf)",x,y);
    }
    return 0;
}
