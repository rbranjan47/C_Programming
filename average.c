#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,newn,sum=0;
    float avg;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("Enters the numbers");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&newn);
        sum=sum+newn;
    }
    avg=sum/n;
    printf("average is= %f",avg);
}
