#include <stdio.h>
#include <conio.h>

void main()
{
    int choice=1;
    while(choice)
    {
        int n,y,d,r=0;
        printf("enterr a no");
        scanf("%d",&n);
        y=n;
        while(n!=0)
        {
            d=n%10;
            r=r*10+d;
            n=n/10;
        }
        if(y==r)
        {
            printf("%d is pallindrome",y);
        }
        else
            printf("no is not pallindrome");

        printf("\n\nenter your choice 1-continue or 0-exit\n");
        scanf("%d",&choice);
    }
    getch();
}
