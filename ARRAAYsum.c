#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0,a[10];
    printf("enter the numbers you want to add=");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter the elements %d",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
        sum=sum+a[i];
    printf("Sum is:%d",sum);
}
