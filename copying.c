#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char a[500],b[500];
    int i;
    printf("enter the first string");
    gets (a);
    for (i=0;a[i]!='\0';i++)
    {
        a[i]=b[i];
    }
    b[i]='\0';
    printf("second string is %s",b);
}
