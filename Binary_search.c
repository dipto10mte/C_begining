#include<stdio.h>
int main()
{
    int ara[]={1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};
    int low=0,high=15,mid;
    int n=97;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(n==ara[mid])
        {
            break;
        }
        if(n<ara[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(low>high)
    {
        printf("%d is not in the array",n);
    }
    else
    {
        printf("%d is found in the array.It is the %d th element of the array.",n,mid);
    }
    return 0;
}
