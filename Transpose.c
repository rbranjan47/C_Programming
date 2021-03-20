#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n,a[5][5];
    printf("enter the matrix size as m and n  \n");
    scanf("%d%d",&m,&n);
    printf("enter the matrix elements \n");
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            printf("%d",a[j][i]);
            printf("\n");
    }
}
