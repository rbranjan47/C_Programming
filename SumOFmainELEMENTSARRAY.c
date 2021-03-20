#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,m,sum=0,a[5][5];
    printf("enter the square matrix number");
    scanf("%d",&m);
    printf("enter the matrix elements ");
    for (i=0;i<m;i++)
        for (j=0;j<m;j++)
        scanf("%d",&a[i][j]);

   for (i=0;i<m;i++)
        for (j=0;j<m;j++)
            if (i==j)
            sum=sum+a[i][j];
        printf("sum of diagonal elements is %d",sum);
}
