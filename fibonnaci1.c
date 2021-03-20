#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pre=0,cur=1,n,i,temp;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d\t%d",pre,cur);
    for (i=3;i<=n;i++)
    {
        temp=cur;
        cur=pre+cur;
        pre=temp;
        printf("\t%d",cur);
    }
}
