#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for (i=2;i<=n/2;i++)
    {
       if (n%i==0)
        {
            printf("not a prime");
            exit(0);
        }
    }
    printf("prime ");
}
