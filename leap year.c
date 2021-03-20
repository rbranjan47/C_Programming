#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter any year");
    scanf("%d",&x);
    if ((x%400==0)||((x%4==0&&x%100!=0)))
    {
        printf("%d is a leap Year",x);
    }
    else
    {
        printf("%d is not a leap year",x);
    }
}

