#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,newn,flag=1;
    printf("enter the value of n ");
    scanf("%d",&n);
    for (newn=2;newn<=n/2;newn++)
    {
        flag=1;
        for (i=2;i<=newn/2;i++)
        {
            if (newn%i==0)
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
            printf("%d",newn);
    }
}
