#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,k,n;
     printf("enter the value of n");
     scanf("%d",&n);
     for (i=1;i<=n;i++)
     {
         for (k=1;k<=(n-i);k++)
         {
             printf(" ");
         }
         for (j=1;j<=i;j++)
         {
             printf("*");
         }
         printf("\n");
     }

}
