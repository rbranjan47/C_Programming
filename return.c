#include<stdio.h>
#include<stdlib.h>

int product(int a,int b)
{
    return(a * b);
}
  int main()
{

int x, y;
{
    printf("enter the value of x\n");
    scanf("%d\n",&x);
}
{
    printf("enter the value of y\n");
    scanf("%d\n",&y);
}
    int produc;
    produc = product(x,y);
    {
        printf("product value is=%d",produc);
    }
}
