#include<stdio.h>
#include<conio.h>
void main()
{
    int m;
    printf("enter the marks of students");
    scanf("%d",&m);
    if (m>=90)
        printf("grade O");
    else if (m>=80)
        printf("grade A");
    else if (m>=70)
        printf("grade B");
    else if (m>=60)
        printf("grade C");
        else if (m>=50)
        printf("grade D");
                else if (m>=40)
        printf("grade E");
        else
            printf("grade F");
}
