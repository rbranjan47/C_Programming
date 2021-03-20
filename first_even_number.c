#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("Even numbers between 0 and your entered number is");
    for (i=0;i<=n;i++)
    {
        if (i%2==0)
            printf(" %d \n",i);
    }
}
