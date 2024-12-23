#include <stdio.h>
#include<stdlib.h>

void main()
{
    int i,n,sum1=0,sum2=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0){
            sum1=sum1+i;
        }
        else{
            sum2=sum2+i;
        }
    }
    printf("the difference is %d",abs(sum1-sum2));
}
