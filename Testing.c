#include<stdio.h>
int main()
{
    int i,j,grid[i][j];
    int m,n,x,y;
    char c;
    printf("Enter co-ordinates of current position: ");
    scanf("%d %d",&x,&y);
    printf("Enter co-ordinates of blocked cell: ");
    scanf("%d %d",&m,&n);
    for(i=0;i<10&&i!=m-1;i++)
    {
        for(j=0;j<10&&j!=n-1;j++)
        {
            grid[i][j]=1;
            grid[m-1][n-1]=2;
        }
    }
    while(1)
    {
        scanf("%c",&c);
        if(c=='s')
        {
            break;
        }
        else if(c=='U')
        {
            if(y++!=n)
            {
                y++;
            }
            else
            {
                printf("This position can't be gone.\n");
            }
        }
        else if(c=='D')
        {
             if(y--!=n)
            {
                y--;
            }
            else
            {
                printf("This position can't be gone.\n");
            }
        }
        else if(c=='L')
        {
             if(x--!=n)
            {
                x--;
            }
            else
            {
                printf("This position can't be gone.\n");
            }
        }
        else if(c=='R')
        {
             if(x++!=n)
            {
                x++;
            }
            else
            {
                printf("This position can't be gone.\n");
            }
        }
        else
        {
            printf("Invalid input\n");
        }
        printf("Final position: %d %d",x,y);
    }
    return 0;
}
