#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,n;
    printf("enter the integer value of n ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
         printf("\n");
    }

}
