#include<stdio.h>
#include<string.h>

typedef struct{
    char first[30];
    char last[30];
} nametype;

typedef struct{
    int id;
    nametype name;
    char grade[3];
} studenttype;

