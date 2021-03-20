#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter any alphabet");
scanf("%c",&n);
switch(n)
{
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
        printf("This alphabet is VOWEL");
        break;
    default:
    printf("this is consonant");
    break;
}
}
