#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n,a[5][5],b[5][5],c[5][5];
    printf("enter the value of n");
    scanf("%d%d",&m,&n);
    printf("enter the elements for first matrix \n");
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    printf("enter the elements for second matrix \n");
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
        scanf("%d",&b[i][j]);
        for (i=0;i<m;i++)
            for (j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];
        printf("added matrix is \n");
        for (i=0;i<m;i++)
        {
            for (j=0;i<n;j++)
                printf("%d",c[i][j]);
        }
}
