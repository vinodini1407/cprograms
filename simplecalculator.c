#include <stdio.h>
void main()
{
    int a,b;
    char op;
    printf("Enter a,b values and operator");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
case'+':printf("The addition is %d",a+b);
        break;
case'-':printf("The subtraction is %d",a-b);
        break;
case'*':printf("The multiplication is %d",a*b);
        break;
case'/':printf("The division is %d",a/b);
        break;
case'%':printf("The modulus is %d",a%b);
        break;
default:printf("Invalid output");
break;
    }
}
