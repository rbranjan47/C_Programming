#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[20];
    printf("enter the value of n");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    {
        for (i=2;i<n;i++)
        a[i]=a[i-1]+a[i-2];

        for (i=0;i<n;i++)
            printf("series is %d\t",a[i]);
    }
}
