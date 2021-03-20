#include<stdio.h>
#include<stdlib.h>


 void sum(int a, int b,int c)
 {
     int sum=a+b+c;
     printf("sum is =%d\n",sum);
 }
int main()
{
    int x,y,z;
    {
        printf("Enter the value of x=\n");
    scanf("%d",&x);
    }
    {
        printf("Enter the value of y=\n");
        scanf("%d",&y);
    }
    {
        printf("Enter the value of z=\n");
        scanf("%d",&z);
    }
    sum(x,y,z);

}
