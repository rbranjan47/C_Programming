#include<stdio.h>
enum year{a,jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
int main()
{
    int i;
    for (i=jan;i<=dec;i++)
    {
    printf("%d\t",i);
    }
    return 0;
}

