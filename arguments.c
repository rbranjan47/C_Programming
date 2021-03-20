#include<stdio.h>
#include<stdlib.h>
int myArraysum(int myArray[], int size )
{
    int sum=0;
    {
        for(int i=0;i<size;i++)
            sum=sum+myArray[i];
    }
    return sum;
}
int main()
{
    int myArraynumber[5]={1,2,3,4,5};
    int Sum_of_Array=myArraysum(myArraynumber,5);
    {
        printf("Sum of array is =%d",Sum_of_Array);
    }
}
