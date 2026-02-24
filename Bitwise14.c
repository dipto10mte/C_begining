#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,4,5,7,8,9,9,10,11,12,14,15};
    int i,n=1,m,x=0,y;
    for(i=0;i<15;i++,n++)
    {
        if(a[i]^n){
            if(x==0){
                x=n;
                n++;
            }
            else{
                y=n;
                printf("The two numbers not present in the array are: %d & %d",x,y);
                return 0;
            }
        }
        if(a[i]==a[i+1])i++;
    }
}
