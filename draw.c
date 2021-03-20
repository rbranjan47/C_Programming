#include<stdio.h>
#include<stdlib.h>
int main()
{
    int newn,i,n,sum=0;
    float avg;
    printf("enter the value of n \n");
    scanf("%d",&n);
    printf("enters the numbers");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&newn);
         sum=sum+newn;
    }
        avg=sum/n;
        printf("Average is=%f",avg);
}
