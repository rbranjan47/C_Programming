#include <stdio.h>
#include<conio.h>
int main()
{
    int myArray [3] [4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,0,1,2}
    };
    for (int i=0;i<3;i++)
        {
            for (int j=0;j<4;j++)
            {
                printf("myArray [%d] [%d] = [%d] \n", i , j , myArray [i][j]);
            }
    }
}
