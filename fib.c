#include<stdio.h>
#include<conio.h>
int main()
{
    int pre=0,cur=1,i,n,temp;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d\t%d",pre,cur);
    for (i=3;i<=n;i++)
    {
        temp=cur;
        cur=cur+pre;
        pre=temp;
        printf("\t%d",cur);
    }
}
