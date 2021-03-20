#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,n,rem;
    int sum=0;
    printf("enter the integer value of n   \n");
    scanf("%d",&n);
    a=n;
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if (sum==a)
    {
     printf("Armstrong Number");
    }
    else
    {
        printf("Not a Armstrong Number");
    }
}
