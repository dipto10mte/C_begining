#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[]="my_file2.txt";

    fp=fopen(filename,"w");
    fprintf(fp,"This is a file created by my program!\n");
    fprintf(fp,"I am so happy.");
    fclose(fp);

    fp=fopen(filename,"a");
    fprintf(fp,"Second line.\n");
    fclose(fp);

    return 0;
}

