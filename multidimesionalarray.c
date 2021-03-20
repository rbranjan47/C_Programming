#include<stdio.h>
#include<stdlib.h>
int main()
{
    int myArray [3][5]={
    {1,2,3,4,5},
    {6,7,8,9,0},
    {3,4,5,6,7}
    };
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<5;j++)

    {
        printf(" myArray [%d][%d]=[%d] \n",i,j,myArray[i][j]);
    }
    }
}
