 #include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("enter a integer number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n", n,i,n*i);
    }
}
