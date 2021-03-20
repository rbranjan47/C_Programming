#include<stdio.h>
#include<math.h>
void main()
{
int n;
printf("Enter a integer number");
scanf("%d",&n);
if((n%3==0)&&(n%5==0))
{
    printf("number is divisible by both 3 and 5");
}
else{
    printf("Not divisible by 3 and 5");
}
}
