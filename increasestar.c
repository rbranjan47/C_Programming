#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j;
    printf("enter the integer value of n \a");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n \a");
    }
}
