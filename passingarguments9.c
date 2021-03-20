#include<stdio.h>
#include<math.h>
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
    int myArraynumber[12]={1,1,1,1,1,1,1,1,1,1,1,1};
    int Sum_of_Array=myArraysum(myArraynumber,12);
    {
        printf("Sum of array=%d",Sum_of_Array);
    }
}
