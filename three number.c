#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    printf("enter three number");
    scanf("%d %d %d",&x,&y,&z);
    if (x>z)
    {
        printf("%d is greatest",&x);
    }
    else
        {
            printf("%d is greatest",&z);
        }
        if (y>z)
        {
            printf("%d is greatest",&y);
        }
        else
        {
            printf("% is greatest",&z);

        }
}

