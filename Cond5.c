#include<stdio.h>
int main()
{
    float n;
    printf("Enter a number=");
    scanf("%f",&n);
    if(n>50)
    {
        printf("%.2f is greater than fifty",n);
    }
    else if(n<50)
    {
        printf("%.2f is lower than 50",n);
    }
    else
    {
        printf("%.2f is equal to fifty",n);
    }
    return 0;
}
