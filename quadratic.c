#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=-b+sqrt(d)/2*a;
        r2=-b+sqrt(d)/2*a;
        printf("Enter r1=%f,r2=%f",r1,r2);
    }
        else if(d<0)
        {
            printf("Roots are imaginary");
        }
        else
        {
            printf("Roots are real and equal");
            r1=r2=-b/2*a;
            printf("r1r2");
        }
        }
