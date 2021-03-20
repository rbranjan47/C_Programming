#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,hcf=0,lcm;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    for(i=1;i<=a || i<=b;i++)
    {
        if (a%i==0 && b%i==0)
            hcf=i;
             lcm = (a*b)/hcf;
    }
    {
        printf("lcm of given two numbers is=%d",lcm);
    }
}
