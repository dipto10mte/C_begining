#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp_in;
    char *input_file="image.jpg";
    fp_in=fopen(input_file,"rb");
    if(fp_in==NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fseek(fp_in,0,SEEK_END);



    return 0;
}
