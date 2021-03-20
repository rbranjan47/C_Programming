#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    char op;
    printf("enter the operator");
    scanf("%c",&op);
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    switch(op)
    {
    case '+':
        printf("result=%d",a+b);
        break;
    case '-':
        printf("result=%d",a-b);
        break;
    case '*':
        printf("result=%d",a*b);
        break;
    case '/':
        printf("result=%d",a/b);
        break;
        default:
        printf("not a valid operator");
    }
}
