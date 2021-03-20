#include<stdio.h>
#include<math.h>
void main()
{
    int marks=35;
    switch(marks)
    {
        case 90:
        printf("Excellent");
        break;
        case 75:
        printf("Very Good");
        break;
        case 60:
        printf("Good");
        break;
        case 33:
        printf("Just Pass");
        break;
        default:
        printf("marks not match");
    }
}
