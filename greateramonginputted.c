#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    printf("enter the value of x and y");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("%d is greater",x);
    }
    else{
        printf("%d is greater",y);
    }
}
