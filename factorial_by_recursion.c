#include<stdio.h>
#include<stdlib.h>
int fact (int n)
{
    int f;
    if (n==1)
        return 1;
    else
        f=n*fact(n-1);
    return f;
}
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("factorial is %d",fact(n));
}
