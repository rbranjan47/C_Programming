#include<stdio.h>
#include<stdlib.h>
int main()
{
    int val=30;
    int *pointer_p;
    pointer_p=&val;
    {
        printf("The value is= %x\n", &val);
        printf("The value of pointer is= %x\n", pointer_p);
        printf("The value is= %d\n", *pointer_p);
    }
}
