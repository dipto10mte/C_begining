#include<stdio.h>
int main()
{
    int a,b,t,x,y,gcd,lcd;
    printf("Enter first number=");
    scanf("%d",&b);
    printf("Enter second number=");
    scanf("%d",&a);
    x=a;
    y=b;
    if(a==0) gcd=a;
    else if(b==0) gcd=b;
    else
    {
        while(b!=0)
        {
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    lcd=x*y/gcd;
    printf("LCD is %d",lcd);
    return 0;
}
