#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,j;
    printf("enter value of n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
