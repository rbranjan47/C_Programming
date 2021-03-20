#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b and c \n");
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b)&&(a>c))
    {
        if (b>c)
        {
            printf("ascending order is %d %d %d",c,b,a);
            printf("descending order is %d %d %d",a,b,c);
        }
        else
        {
            printf("ascending order is %d %d %d",b,c,a);
            printf("descending order is %d %d %d",a,c,b);
        }
    }
        else if ((b>a)&&(b>c))
        {
            if (a>c)
            {
                printf("ascending order is %d %d %d",c,a,b);
                printf("descending order is %d %d %d",b,a,c);
            }
            else
            {
            printf("ascending order is %d %d %d",a,c,b);
            printf("descending order is %d %d %d",b,c,a);
            }
        }
        else if ((c>a)&&(c>b))
        {
            if (a>b)
            {
                printf("ascending order is %d %d %d",b,a,c);
                printf("descending order id %d %d %d",c,a,b);
            }
            else
            {
                printf("ascending order is %d %d %d",a,b,c);
                printf("descending order is %d %d %d",c,b,a);
            }
        }

}
