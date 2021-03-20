#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,sum=0,a[5][5];
    printf("enter the square matrix value \n ");
    scanf("%d",&m);
    printf("enter the matrix element ");
    for (i=0;i<m;i++)
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);

    for (i=0;i<m;i++)
        for(j=0;j<m;j++)
            if (i>=j)
            sum=sum+a[i][j];

        printf("sum of lower triangle element is %d",sum);
}
