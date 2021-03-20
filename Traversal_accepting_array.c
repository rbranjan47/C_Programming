#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size,a[50];
    printf("enter the size of array");
    scanf("%d",&size);
    printf("elements are.....\n");
    for (i=0;i<size;i++)
    {
        printf("elements are %d",i+1);
        scanf("%d",&a[i]);
    }
    printf("entered elements are ");
    for (i=0;i<size;i++)
        printf("%d \n",a[i]);
}
