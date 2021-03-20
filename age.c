#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);
if (age>18)
{
    printf("age is greater than 18");
}
else if (age==18)
{
    printf("age is equal to 18");
}
else if (age<18)
{
    printf("age is lesser than 18");
}
}
