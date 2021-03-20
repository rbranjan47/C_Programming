#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r;
    printf("Enter the value of n");
    scanf("%d",&n);
    r=sqrt(n);
    if(r*r==n)
    {
        printf("Number is Square");
    }
    else
    {
        printf("Number is not a square");
    }
}
