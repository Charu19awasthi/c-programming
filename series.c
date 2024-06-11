#include <stdio.h>
#include <conio.h>
void main(){
    int n,sum=0;
    // series 1-2+3-4+5-6+7-------n
    printf("enter the no upto which term want to add the series");
    scanf("%d",&n);
    if (n%2==0){
        sum=-(n/2);
    }
    else{
        sum=-(n/2)+n;
    }
    printf("sum of the series is %d",sum);

getch();
}
