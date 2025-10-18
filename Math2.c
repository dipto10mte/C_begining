#include<stdio.h>
int main()
{
    int a,b,value;
    char sign;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    value=a+b;
    sign='+';
    printf("%d%c%d=%d\n",a,sign,b,value);
    value=a-b;
    sign='-';
    printf("%d%c%d=%d\n",a,sign,b,value);
    value=a*b;
    sign='*';
    printf("%d%c%d=%d\n",a,sign,b,value);
    value=a/b;
    sign='/';
    printf("%d%c%d=%d\n",a,sign,b,value);
    return 0;
}
