#include<stdio.h>
#include<stdlib.h>
int myArraysum(int myArray[], int size)
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

    int myArraynumber[7]={1,2,3,4,5,6,7};
    int sum_of_array=myArraysum(myArraynumber,7);
    {
        printf("the sum of array=%d",sum_of_array);
    }

}
