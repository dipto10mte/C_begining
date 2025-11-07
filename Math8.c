#include<stdio.h>
int main()
{
    double c,f;
    int n;
    printf("Male correct input for desired convertion of temperature scale.\nFor,\nCelsius to Farenheit type 1\nFarenheit to Celsius type 2\nInput=");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter temperature in celsius=");
        scanf("%lf",&c);
        f=1.8*c+32;
        printf("The temperature in farenheit=%0.2lf",f);
    }
    else if(n==2)
    {
        printf("Enter temperature in farenhiet=");
        scanf("%lf",&f);
        c=5*(f-32)/9;
        printf("The temperature in celsius is=%0.2lf",c);
    }
    else
    {
        printf("Incorrrect input");
    }
    return 0;
}
