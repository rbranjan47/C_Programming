#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("enter a integer number");
    scanf("%d",&n);
    i=sqrt(n);
    if(i*i==n)
    {
        printf("square number");
    }
    else
    {
        printf("Not a square number");
    }
}
