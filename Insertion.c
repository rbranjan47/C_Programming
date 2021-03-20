#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size,a[20],pos,num;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements of array...\n");
    for (i=0;i<size;i++)
    {
        printf("elements %d are .....",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the number you want to add...");
    scanf("%d",&num);
    printf("enter the position \n");
    scanf("%d",&pos);
    if (pos <=0 || pos>size+1)
    {111111111
        printf("invalid position ");
    }
    else
    for (i=size-1;i<=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    for (i=0;i<=size;i++)
        printf("%d",a[i]);
}
