#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    char *s1,*s2;
    printf("enter the first string  \n");
    scanf("%s",s1);
    printf("enter the second string \n");
    scanf("%s",s2);


    if (strcmp(s1,s2)>0)
        printf("String s1 is greater");
    else if (strcmp(s1,s2)<0)
        printf("string s2 is greater");
    else printf("equal string ");
}
