#include<stdio.h>
#include<conio.h>
int add(int x,int y)
{
 return (x+y);
}
int sub(int x,int y)
{
    return (x-y);
}
int mul(int x,int y)
{
    return (x*y);
}
int div(int x,int y)
{
    return (x/y);
}
main()
{
    int a, b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("addition is %d\n",add(a,b));
    printf("subtraction is %d\n",sub(a,b));
    printf("multiplication is %d\n",mul(a,b));
    printf("division is %d\n",div(a,b));
}
