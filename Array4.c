#include<stdio.h>
int main()
{
    int marks,i,count,t[20]={53,84,76,35,41,25,98,40,68,43,81,93,77,26,38,74,82,41,65,95};
    for(marks=50;marks<=100;marks++)
    {
        count=0;
        for(i=1;i<20;i++)
        {
            if(t[i]==marks)
            {
                count++;
            }
        }
        printf("Marks=%d count=%d\n",marks,count);
    }
    return 0;
}
