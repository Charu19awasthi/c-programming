#include <stdio.h>
#include<conio.h>
void main(){
    int sum=0,r,n;
    int choice=1;
    while(choice==1){
        printf("enter a no");
        scanf("%d",&n);
        while (n!=0){
            r=n%10;
            n=n/10;
            if (r%2==0)
              sum=sum+r;
        }
        printf("sum of even digits %d\n",sum);
        printf("enter your choice yor n");
        scanf("%d",&choice);
        sum=0;
    }
}
