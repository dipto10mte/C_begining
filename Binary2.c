#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,i,j,binary[10000];
    printf("Enter a decimal number: ");
    scanf("%d",&a);
    for(i=0;a>0;i++)
    {
        binary[i]=a%2;
        a=a/2;
    }
    printf("Binary value is: ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d", binary[j]);
    }
    return 0;
}
