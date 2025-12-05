#include<stdio.h>
int main()
{
    int ara1[]={3,1,5,2,4};
    int ara2[5];
    int i,minimum,index,minimum_index;
    for(index=0;index<5;index++)
    {
        minimum=10000;
        for(i=0;i<5;i++)
        {
            if(ara1[i]<minimum)
            {
                minimum=ara1[i];
                minimum_index=i;
            }
        }
        ara1[minimum_index]=10000;
        ara2[index]=minimum;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",ara2[i]);
    }
    return 0;
}
