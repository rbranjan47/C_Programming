#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size,pos,a[50];
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements \n");
    for (i=0;i<size;i++)
    {
        printf("elements %d are ",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the position of array for delete....\n");
    scanf("%d",&pos);
    if (pos<=0 || pos>size)
    {
        printf("invalid position");
    }
    else
        for (i=pos-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    for (i=0;i<size;i++)
        printf("%d",a[i]);
}
