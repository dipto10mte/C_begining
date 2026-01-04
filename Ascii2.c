#include<stdio.h>
int main()
{
    char sl,cl;
    printf("Please enter a small letter: ");
    sl=getchar();
    cl=sl-32;
    printf("Capital letter is: %c",cl);
    return 0;
}
