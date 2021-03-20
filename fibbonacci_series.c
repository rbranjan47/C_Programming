#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pre=0,cur=1,n,i,temp;
    printf("enter the value of n=");
    scanf("%d",&n);
    printf("fibbonacci series is: ");
    printf("%d\t %d \t",pre,cur);
    for (i=3;i<=n;i++)
    {
        temp=cur;
        cur=cur+pre;
        pre=temp;
        printf("%d \t",cur);
    }
}
