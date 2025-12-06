#include<stdio.h>
int main()
{
    int x, y;
    char c;
    printf("Please enter initial position: ");
    scanf("%d %d", &x, &y);

    while(1)
    {
        scanf(" %c", &c);  // Added space before %c to skip whitespace

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
