#include<stdio.h>
int main()
{
    float n;
    printf("Enter a number=");
    scanf("%f",&n);
    if(n>30)
    {
        printf("The number is greater than thirty.");
    }
    else if(n<30)
    {
        printf("The number is less than thirty.");
    }
    else
    {
        printf("The number is equal to thirty.");
    }
    return 0;
}
