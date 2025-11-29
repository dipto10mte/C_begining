#include<stdio.h>
int main()
{
    char saarch[7][100]={"Bangladesh","Pakistan","Sri Lanka","Nepal","Bhutan","Maldives","India"};
    int row;
    for(row=0;row<7;row++)
    {
        printf("%s\n",saarch[row]);
    }
    return 0;
}
