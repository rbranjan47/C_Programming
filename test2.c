#include<stdio.h>
#include<stdlib.h>
main()
{
int n,i;
printf("enter the value of n");
scanf("%d",n);
for (i=2;i<=n/2;i++)
{
    if (n%i==0)
    {
        printf("not a prime number");
        exit(0);
    }
}
printf("prime number");
}
