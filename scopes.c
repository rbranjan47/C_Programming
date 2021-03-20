#include<stdio.h>
#include<stdlib.h>
 int global_v=24;
 int main()
 {
     int local_v=20;
     printf("local variable=%d\n",local_v);
     printf("global variable=%d\n",global_v);
 }

