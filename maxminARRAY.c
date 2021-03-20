#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,max,min,a[20];
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for (i=0;i<n;i++)
    {
        printf("elements is %d",i+1);
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]>max)
            max=a[i];
        if (a[i]<min)
            min=a[i];
    }
    printf("%d\n",max);
    printf("%d\n",min);
}
