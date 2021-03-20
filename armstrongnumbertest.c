#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rem,n,a;
    int sum=0;
    printf("enter the integer value of n= \n");
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
        printf("armstrong number");
    }
    else
       {
            printf("not a armstrong number");
       }
}
