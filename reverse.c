#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rem,n;
    printf("enter the integer value of n \n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;

        printf("%d",rem);
        n=n/10;
    }
}
