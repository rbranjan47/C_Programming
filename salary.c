#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f;
    double salary;
    printf("This is your salary, enter your total day, present days, working hour and total hour");
    scanf("%d %d %d %d %d %d %lf",&a,&b,&c,&d,&e,&f,&salary);
    if (b>c)
    {
        e=b*c;
        f=a*d;
        salary=e/f;
        printf("%lf is salary");
    }
    else
    {
        printf("Your salary is very less, contact to your owner");
    }
}
