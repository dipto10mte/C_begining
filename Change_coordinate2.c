#include<stdio.h>
int main()
{
    int i,j,n,x,y,grid[i][j];
    char c;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            grid[i][j]=1;
        }
    }
    printf("Please enter the blocked cells: ");
    scanf("%d",&n);
    printf("Please enter initial position: ");
    scanf("%d %d", &x, &y);
    while(1)
    {
        scanf(" %c", &c);
        if(c == 'S')
        {
            break;
        }
        else if(c == 'U')
        {
            x--;
        }
        else if(c == 'D')
        {
            x++;
        }
        else if(c == 'L')
        {
            y--;
        }
        else if(c == 'R')
        {
            y++;
        }
        else
        {
            printf("Invalid input\n");
        }
        printf("Final position: (%d,%d)\n", x, y);
    }
    printf("Final position: (%d,%d)\n", x, y);
    return 0;
}
