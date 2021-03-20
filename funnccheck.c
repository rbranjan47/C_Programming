#include<stdio.h>
#include<conio.h>

fact (int x)
{
    int i,fact=1;
    for (i=1;i<=x;i++)
        fact=fact*i;
    printf("factorial is %d\n",fact);
}
isprime (int x)
{
    int i;
    for (i=2;i<x;i++)
    {
        if (x%i==0)
        {
            printf("not a prime number\n");
            return 0;
        }
        printf("prime number\n");
    }
}
fibbno (int x)
{
    int i,pre=0,cur=1,temp;
    printf("%d%d",pre,cur);
    for (i=3;i<=x;i++)
    {
        temp=cur;
        cur=pre+cur;
        pre=temp;
        printf("\t%d\t",cur);
    }
}
main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    fact (n);
    isprime (n);
    fibbno (n);
}
