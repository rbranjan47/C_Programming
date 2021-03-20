#include<stdio.h>
#include<stdlib.h>

swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d b=%d",a,b);
    swap (&a,&b);
    printf("after swapping a=%d b=%d",a,b);
}
