#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    float sum=0,fact=1;
    printf("enter the value of n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=1;
        for (j=1;j<=i+1;j++)
            fact=fact*j;
        sum=sum+i/fact;
    }
    printf("sum of series is %f",sum);
}
