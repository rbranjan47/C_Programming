#include<stdio.h>
#include<stdio.h>
int main()
{
    int i,j,sum,mul,sub;
    double div;
    printf("enter any two numbers=");
    scanf("%d%d",&i,&j);
    {
        sum=i+j;
        printf("Sum is=%d\n",sum);
    }
    {
        mul=i*j;
        printf("Multiplication is=%d\n",mul);
    }
    {
         sub=i-j;
         printf("Subtraction is=%d\n",sub);
    }

       {
           div=i/j;
           printf("Division is=%d",div);
       }

}
