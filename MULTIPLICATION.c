#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,m,a[5][5],b[5][5],c[5][5];
    printf("enter the square matrix value \n");
    scanf("%d",&m);
    printf("enter the first matrix value ");
    for (i=0;i<m;i++)
        for (j=0;j<m;j++)
        scanf("%d",&a[i][j]);

    printf("enter the second matrix value ");
    for (i=0;i<m;i++)
        for (j=0;j<m;j++)
        scanf("%d",&b[i][j]);

    for(i=0;i<m;i++)
        for (j=0;j<m;j++)
        {
            c[i][j]=0;
            for (k=0;k<m;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    printf("resultant matrix \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
            printf("%d",c[i][j]);
        printf("\n");
    }
}
