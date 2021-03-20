#include<stdio.h>
#include<stdlib.h>
int main()
{

    int marks=50;
    switch (marks)
    {
    case 90:
        printf("excellent");
        break;
        case 80:
        printf("very good");
        break;
        case 70:
        printf("good");
        break;
        case 60:
        printf("at least good");
        break;
        case 50:
        printf("least but good");
        break;
        case 40:
        printf("least");
        break;
        case 20:
        printf("not good");
        break;
        default:
        printf("marks not match");
    }
}
