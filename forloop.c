#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n=17;
    printf("enter an integer\n",&n);
    for (i=17;i<=n;i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
}
