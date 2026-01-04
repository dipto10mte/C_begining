#include<stdio.h>
int main()
{
    int i,x;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("%dx%d=%d\n",i+1,x,(i+1)*x);
    }
    return 0;
}
