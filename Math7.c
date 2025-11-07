#include<stdio.h>
int main()
{
    int i,n,m;
    printf("The last number of the series=");
    scanf("%d",&n);
    for(i=1,m=0;i<=n;i++)
    {
        m=m+i;
    }
    printf("Summation is %d",m);
    return 0;
}
