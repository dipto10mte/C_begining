#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *marks;
    int i,n;
    printf("Please enter the number of student: ");
    scanf("%d",&n);

    //allocate memory
    marks=(int*)malloc(sizeof(int)*n);
    if(marks==NULL){
        printf("Memory allocation failed for marks\n");
        return 1;
    }


    return 0;
}
