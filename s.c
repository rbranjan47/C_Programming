#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,flag,temp;
    printf("enter the value of n=");
    scanf("%d",&n);
    for (temp=2;temp<=n;temp++)
    {
        flag=1;
        for (i=2;i<=temp/2;i++)
        {
        if (temp%i==0)
        {
            flag=0;
            break;
        }
        }
        if (flag==1)
        printf("%d \n",temp);
    }
}
