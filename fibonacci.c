#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,c;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("the values of a and b %d%d",a,b);
    for(i=2;i<n;++i)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        
    }
    
}
