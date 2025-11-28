#include<stdio.h>
int main()
{
    int marks[4][10],col,i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%d",&marks[i][j]);
        }
    }
    for(col=0;col<10;col++)
    {
        marks[3][col]=marks[0][col]*0.25+marks[1][col]*0.25+marks[2][col]*0.5;
        printf("Roll no:%d Marks:%d\n",col+1,marks[3][col]);
    }
    return 0;
}
