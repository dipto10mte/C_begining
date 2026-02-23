#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,4,5,6,8,9};
    int i,n=1;
    for(i=0;i<9;i++,n++){
        if(a[i]^n){
            printf("The number not present in the array is %d",n);
            return 0;
        }
        if(a[i]==a[i+1])i++;
    }
}
