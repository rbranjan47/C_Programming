#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter the integer number");
    scanf("%d",&n);//& keyword call the variable n again and again
    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);//here we not use & keyword with i as,i call only one times during result not again and again like n.
    }
}
