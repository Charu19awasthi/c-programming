#include<stdio.h>
#include <conio.h>
void main(){
    int n,d,inp,r=0,sum=0;
    printf("enter any no to reverse it");
    scanf("%d",&n);
    inp=n;
    while(n!=0){
        d=n%10;
        sum=sum+d;
        n=n/10;
        r=(r*10)+d;
        }
    printf("reverse of entered no is %d\nsum of digits of a no is %d\nsum of both the no %d + %d =%d",r,sum,inp,r,(inp+r));
  getch();
}
