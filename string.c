#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char *s1,*s2;
    printf("enter the string: ");
    scanf("%s",s1);
    printf("reverse string is: %s", strrev(s1));
    printf("length of string is: %d", strlen(s1));
    printf("in uppercase: %s", strupr(s1));
    printf("in lowercase: %s", strlwr(s1));
    strcpy(s1,s2);
    printf(" copied string is: %s", s2);
    getch();
}
