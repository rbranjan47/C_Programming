#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[5];
    printf("enter the value of n\t");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf ("enter the elements %d",i+1);
        scanf("%d",&a[i]);
    }
    for (i=n-1;i>0;i--)
    printf("elements is %d:%d \n ",i+1,a[i]);
}
