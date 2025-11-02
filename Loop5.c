#include<stdio.h>
int main()
{
    int n,i;
    n=5;
    for(i=1;i<=10;i=i+1)
    {
        printf("%dX%d=%d\n",n,i,n*i);
    }
    return 0;
}
