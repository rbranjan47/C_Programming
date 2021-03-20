#include<stdio.h>
#include<math.h>
int Arraysum(int myArray[], int size)
{

int sum = 0;
    for (int i=0;i < size;i++)
    {
        sum = sum +  myArray[i];

    }
     return sum;
}
int main()
{
    int myArrayname [6]={10,20,30,40,55,60};
    int sum_of_array = Arraysum( myArrayname, 6);
    {
        printf(" Sum  Array = %d", sum_of_array);
    }

}
