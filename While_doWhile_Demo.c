#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    while (i<=10);
    i++;
    {
        printf("The value is %d\n",i);
    }
    printf("****************************\n");
    int j=0;
    do
    {
        printf("The value is %d\n",j);
        j++;
    }
    while (j<=10);
}
