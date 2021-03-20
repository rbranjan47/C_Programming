#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size,num,pos,a[20];
    printf("enter the size the array");
    scanf("%d",&size);
    printf("enter the elements.....\n");
    for (i=0;i<size;i++)
    {
        printf("elements are %d",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the number to insert it ");
    scanf("%d",&num);
    printf("enter the position \n");
    scanf("%d",&pos);
    if (pos<=0 || pos>size+1)
    {
        printf("invalid position");
    }
    else
        for(i=size-1;i<=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    for(i=0;i<size;i++)
        printf("%d",a[i]);
}
