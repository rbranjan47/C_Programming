#include<stdio.h>
#include<stdlib.h>
int fibbo(int pre,int cur,int x)
{
    int temp;
    if (x==2)
    {
        exit (0);
    }
    temp=cur;
    cur=cur+pre;
    pre=temp;
    printf("%d \t",cur);
    fibbo(pre,cur,x-1);
}
int main()
{
    int pre=0,cur=1,n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d \t %d \t",pre,cur);
    fibbo(pre,cur,n);
}
