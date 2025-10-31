#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet in lower case:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is vowel",ch);
    }
    else
    {
        printf("%c is constant",ch);
    }
    return 0;
}
