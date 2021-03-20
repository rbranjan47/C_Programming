#include<stdio.h>
#include<stdlib.h>
 int main()
 {
     int val=40;
     int *pointer_p;
     pointer_p=&val;
     {
         printf("The value of val=%x\n",&val);
         printf("The value of pointers %d\n", pointer_p);
         printf("The value of pointers %d\n", *pointer_p);
     }
 }
