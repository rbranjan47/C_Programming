#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char str[100];
    int i,len=0;
    printf("enter the string ");
    gets (str);
    for (i=0;str[i]!='\0';i++)
        len++;
    printf("length of string is....%d",len);
}
