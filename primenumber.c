#include<stdio.h>
void main()
{
    int i,n,count=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(n%i==0)
        {
        count++;
        }
    }
    if(count==2)
    {
        printf("given num is prime");
    }
    else{
        printf("given num is not a prime");
    }
    
}
