#include<stdio.h>
int main()
{
    double a,b,c,d,e;
    //a=loan,b=Rate of interest,c=net time,d=total amount,e= monthly amount//
    printf("Enter the loan amount=");
    scanf("%lf",&a);
    printf("Enter the interest rate(percentage)=");
    scanf("%lf",&b);
    printf("Enter the net time of loan(year)=");
    scanf("%lf",&c);
    d=a+a*b/100*c;
    e=d/(c*12);
    printf("Ttal amount to be paid=%0.2lf\nAmount to be paid monthly=%0.2lf",d,e);
    return 0;
}
