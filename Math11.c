#include<stdio.h>
int main()
{
    int ft,st,f;
    double t;
    printf("Enter marks of 1st term=");
    scanf("%d",&ft);
    printf("Enter marks of 2nd term=");
    scanf("%d",&st);
    printf("Enter marks of final exam=");
    scanf("%d",&f);
    t=ft*0.25+st*0.25+f*0.5;
    printf("Total marks=%0.2lf",t);
    return 0;
}
