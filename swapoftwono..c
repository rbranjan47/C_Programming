#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("enter the value of a and b\a");
    scanf("%d %d",&a,&b);
    printf("\abefore swapping a=%d b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\aafter swapping a=%d b=%d",a,b);
}
