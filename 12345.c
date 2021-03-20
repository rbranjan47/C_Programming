#include<stdio.h>
#include<stdlib.h>
void foo (int *param)
{
    printf("%d",*param);
}
int main()
{
    int a[4]={1,2,3,4};
    foo(&a[2]);
}
