#include<stdio.h>

typedef struct{
    int p;
    int q;
}Rational;

void gcd(Rational *s1, Rational *s2){
    int a,b,r;
    a=s1->q;
    b=s2->q;
    if(a<b){
        r=a;
        a=b;
        b=r;
    }
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    static int x;
    x=a;
}

void gcd1(Rational *s1){
    int a,b,r;
    a=s1->p;
    b=s1->q;
    if(a<b){
        r=a;
        a=b;
        b=r;
    }
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    static int y;
    y=a;
}

void gcd2(Rational *s2){
    int a,b,r,s;
    a=s2->p;
    b=s2->q;
    if(a<b){
        r=a;
        a=b;
        b=r;
    }
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    static int z;
    z=a;
}

void add(Rational *s1, Rational *s2){

}

void mul(Rational *s1, Rational *s2){
    int a,b;
    a=s1->p*s2->p;
    b=s1->q*s2->q;
    a=a%(y*z);
    b=b%(y*z);
    printf("Multiplication result: %d/%d",a,b);
}

void div(Rational *s1, Rational *s2){
    int a,b;
    a=s1->p*s2->q;
    b=s1->q*s2->p;
    a=a%(y*z);
    b=b%(y*z);
    printf("Division result: %d/%d",a,b);
}

int main()
{
    Rational a;
    Rational b;
    a.p=3;
    a.q=7;
    b.p=9;
    b.q=15;
    mul(&a,&b);
    div(&a,&b);
    return 0;
}

