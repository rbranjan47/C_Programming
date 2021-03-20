#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,j,max,min,temp,a[20];
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for (i=0;i<n;i++)
    {
        printf("elements are %d",i+1);
        scanf("%d",a[i]);
    }
    max=a[0];
    for (i=0;i<n;i++)
    {
        for (j=0;j<i;j++)
            if (a[i]>a[j])
        {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;

        }
    }
    printf("ascending orders is \n");
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    min=a[0];
    for (i=0;i<n;i++)
    {
        for (j=0;i<i;j++)
            if (a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    printf("descending orders is \n");
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
