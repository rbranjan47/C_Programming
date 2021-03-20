//#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//main()
//{
  //  char *s1,*s2;
    //printf("enter the string s1");
   // scanf("%s",s1);
 //   printf("enter the string s2");
   // scanf("%s",s2);
    //printf("concatenated string is....%s",strcat(s1,s2));
//}




#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char a[100],b[100];
    printf("enter the first string ");
    gets (a);
    printf("enter the second string ");
    gets(b);
    printf("after concatenated string %s",strcat(a,b));
}
