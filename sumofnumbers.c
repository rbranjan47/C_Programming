#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0,newn;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("number entered \n");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&newn);
        sum=sum+newn;
    }
    printf("sum of given value is   %d",sum);
}
