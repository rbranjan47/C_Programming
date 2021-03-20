#include<stdio.h>
#include<stdlib.h>
int Arraysum(int myArray[], int size)
{
    int sum =0;
    {
        for(int i=0;i<size;i++)
            sum=sum +myArray[i];
    }
    return sum;
}
int main()
{
    int myArraynumber[9]={1,2,3,4,5,6,7,8,9};
    int sum_of_Array=Arraysum(myArraynumber,6);
    {
        printf("Sum of array=%d",sum_of_Array);
    }
}
