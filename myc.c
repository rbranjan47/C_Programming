#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
    int i,j,n,sum=0;
    printf("enter the value of n= \t");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<i;j++)
        {
            sum=sum+n;
            printf("value is %d\n",sum);
        }
    }
}
