#include<stdio.h>
int main()
{
    int i,j,n,x,y,grid[10][10];
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            grid[i][j]=1;
        }
    }
    printf("Enter the number of blocked cells: ");
    scanf("%d",&n);
    printf("Now enter the position co-ordinates: ");
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        grid[x][y]=0;
    }
    return 0;
}
