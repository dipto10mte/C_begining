#include<stdio.h>
#include<stdlib.h>
in main()
{
    int *marks;
    int i,n;
    printf("Please enter the number of student: ");
    scanf("%d",&n);

    //now allocate memory
    marks=int(*)malloc(sizeof(int)*n);

    return 0;
}
