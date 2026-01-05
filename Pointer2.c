#include<stdio.h>
int main()
{
    double pi=3.14159265358;
    double *p;
    p=&pi;
    printf("Value of pi : %lf\n",pi);
    printf("Value of pi : %lf\n",*p);
    return 0;
}
