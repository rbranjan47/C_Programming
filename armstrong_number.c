#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,rem,temp;
    int sum=0;
    printf("enter the value of n, to check whether it is armstrong number \n");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if (sum==temp)
    {
        printf("number is armstrong number");
    }
    else
    {
        printf("not a armstrong number");
    }
}
