//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//main()
//{
    //char *s;
    //int i, alphabets=0,digits=0,symbols=0;
    //printf("enter a string characters ");
    //scanf("%s",s);
    //for(i=0;s[i]!='\0';i++)

        //if (isaplha(s[i]))
        //alphabets++;
        //else
        //if (isdigit(s[i]))
        //digits++;
        //else
        //symbols++;

    //printf("Alphabets : %d \n",alphabets);
    //printf("Digits : %d \n",digits );
    //printf("symbols : %d \n",symbols);
//}




#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
    char str[100];
    int i=0,alphabets=0,symbols=0,digits=0;
    printf("enter the string ");
    gets (str);
    while (str[i]!='\0')
    {
        if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            alphabets++;
        }
        else if (str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else symbols++;
        i++;
    }
    printf("Alphabets : %d \n",alphabets);
    printf("Digits : %d \n",digits );
    printf("symbols : %d \n",symbols);
}
