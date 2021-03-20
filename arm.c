#include<stdio.h>
#include<stdlib.h>
int main()
{
    int temp,n,sum=0,rem;
    printf("enter the value of n");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if (temp==sum)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not a armstrong number");
    }
}
