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

void calculate_grade(studenttype *s, int mark)
{
    if (mark>=80)
        strcpy(s->grade, "A+");
    else if(mark>=70)
        strcpy(s->grade, "A");
    else if(mark>=60)
        strcpy(s->grade, "A-");
    else if(mark>=50)
        strcpy(s->grade, "B");
    else if(mark>=40)
        strcpy(s->grade, "C");
    else
        strcpy(s->grade, "F");

}

