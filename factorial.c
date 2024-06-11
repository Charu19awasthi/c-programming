#include <stdio.h>
#include <conio.h>
// to calculate factorial of first n numbers
int factorial(int a){
     int c=1;
     if (a==0 || a==1){
        return (c);
     }
     else
     {
         c=a*factorial(a-1);
         return (c);
     }
 }
 void main()
 {
     int n,fact;
     printf("enter a no to print its factorial");
     scanf("%d",&n);
     for (int i=1; i<=n;i++)
     {
         fact=factorial(i);
         printf("thr factorial of no %d is %d\n",i,fact);

     }


  getch();
 }


