#include<stdio.h>
#include<math.h>
#define size 40
int ar[size];
void print_ar()
{
    int i;
    for(i=2;i<size;i++)
    {
        printf("%4d",ar[i]);
    }
    printf("\n");
    for(i=2;i<size;i++)
    {
        printf("----");
    }
    printf(("\n"));
    for(i=2;i<size;i++)
    {
        printf("%4d",i);
    }
    printf("\n\n\n");
}
void sieve()
{
    int i,j,root;
    for(i=2;i<size;i++)
    {
        ar[i]=1;
    }
    root=sqrt(size);
    print_ar();
    for(i=2;i<=root;i++)
    {
        if(ar[i]==1)
        {
            for(j=2;i*j<=size;j++)
            {
                ar[i*j]=0;
            }
            print_ar();
        }
    }
}
int is_prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    return ar[n];
}
int main()
{
    int n,m;
    sieve();
    while(1)
    {
        printf("Please enter a number(enter 0 to exit)=");
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        if(n>=size)
        {
            printf("The number should be less than %d.\n",size);
            continue;
        }
        if(1==is_prime(n))
        {
            printf("%d is a prime number.\n",n);
        }
        else
        {
            printf("%d is not a prime number.\n");
        }
    }
    return 0;
}
