#include<stdio.h>
#include<conio.h>
square (int x)
{
    return (x*x);
}
cube (int x)
{
    return (x*x*x);
}
main()
{
    int n;
    printf("enter th value of n");
    scanf("%d",&n);
    printf("Square is %d\n",square(n));
    printf("Cube is %d\n",cube(n));
    square(n); //not benefits of direct calling the functions
    cube(n);// we have declare or allocate its memory the functions whatever we used,
}
