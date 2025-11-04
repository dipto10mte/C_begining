#include<stdio.h>
int main ()
{
    int m,n,i;
    n=5;
    m=0;
    for(i=1;i<=10;i=i+1)
    {
        m=m+n;
        printf("%dX%d=%d\n",m,n,n*i);
    }
    return 0;
}
