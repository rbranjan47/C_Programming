#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,flag=1,newn;
    printf("enter the  value of n =");
    scanf("%d",&n);
    for (newn=2;newn<=n;newn++)
    {
        flag=1;
        {
             for (i=2;i<=newn/2;i++)
            {
                if (newn%i==0)
                flag=0;
                break;
            }
    }
    if (flag==1)
        printf("%d\t",newn);
}
}
