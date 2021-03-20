#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,n;
    printf("enter the integer value of n=");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if (n % i==0)
        {
            printf("not a prime number");
            exit(0);
        }
    }
    printf("prime number");
}
