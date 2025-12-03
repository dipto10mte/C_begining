#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,i,binary[65];
    printf("Enter a decimal number: ");
    scanf("%d",&a);
    for(i=0;a>0;i++)
    {
        b=a%2;
        a=a/2;
        binary[i]=b;
    }
    printf("Binary value is %s",binary[65]);
    return 0;
}
