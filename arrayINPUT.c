#include<stdio.h>
#include<conio.h>
 main()
 {
     int i,n,a[20];
     printf("enter the value of n");
     scanf("%d",&n);
     for (i=0;i<n;i++)
     {
         printf("enter the elements %d",i+1);
         scanf("%d",&a[i]);
     }
     for (i=0;i<n;i++)
        printf("\n elements is %d:%d",i+1,a[i]);
 }
