#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet=");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("%c is lower case",ch);
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("%c is upper case",ch);
    }
    return 0;
}
