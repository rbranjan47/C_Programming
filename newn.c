#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n;
    printf("enter the value of n=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (k=1;k<i;k++)
        {
            printf(" ");
        }
        for (j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
