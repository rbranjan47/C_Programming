#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,j,k,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",65+j);
        }
        for(k=1;k<(n-i);k++)
            {
                printf(" ");
            }
            for (j=i;j>=0;j--)
            {
                printf("%c",65+j);
            }
            printf("\n");
    }
}
