#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,r1,r2,real,img;
    printf("\n Enter the coefficients of a,b and c");
    scanf("\n%f%f%f",&a,&b,&c);
    d=(b*b)-4*a*c;
    printf("\n The value of discriminant is%f",d);
    //real and different//
    if(d>0)
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("\nRoots are real and distinct");
        printf("\nThe value Root1=%f",r1);
        printf("\nThe value Root2=%f",r2);
    }
    //real and equal//
    else if(d==0)
    {
        r1=(-b/2*a);
        r2=r1;
        printf("\nRoots are real and equal");
        printf("\nThe value Root1=%f",r1);
        printf("\nThe value Root2=%f",r2);
    }
    //unequal and imaginary//
    else
    {
        real=(-b/2*a);
        img=sqrt(-d)/2*a;
        r1=real+img;
        r2=real-img;
        printf("\nRoots are complex");
        printf("\nThe value Root1=%f",r1);
        printf("\nThe value Root2=%f",r2);
    }
    return 0;
    }