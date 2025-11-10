#include<stdio.h>
int main()
{
    int i,j,total[15]={6,8,4,2,5,6,9,7,1,2,4,1,5,8,6},count[11];
    for(i=0;i<11;i++)
    {
        count[i]=0;
    }
    for(i=0;i<12;i++)
    {
        count[total[i]]++;
        for(j=0;j<10;j++)
        {
            printf("%d \n",count[j]);
        }
    }
    return 0;
}
