#include <stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[20];
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter elements \n");
    for (i=0;i<n;i++)
    {
        printf("elements are %d",i+1);
        scanf("%d",a[i]);
    }
    printf("positive numbers\n");
    for (i=0;i<n;i++)
    if (a[i]>0)
    printf("%d",a[i]);
    printf("negative numbers \n");
    for (i=0;i<n;i++)
    if (a[i]<0)
    printf("%d",a[i]);
}
