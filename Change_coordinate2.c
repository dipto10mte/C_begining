#include<stdio.h>
int main()
{
    int c,i,j,x,y;
    printf("Enter the co-ordinates of blocked cells: ");
    scanf("%d %d",&i,&j);
    printf("Now enter the position co-ordinates: ");
    scanf("%d %d",&x,&y);
    while(1)
    {
        scanf("%c",&c)
        if(c=='E')
        {
            break;
        }
        else if(c=='')
        {

        }
        printf("Final position: %d %d",x,y);
    }
    return 0;
}
