#include <stdio.h>
#include <conio.h>
fiba(int n)
{
    int c=1;
    if (n==1 || n==2)
    {
        return c;
    }
    else
    {
        c=fiba(n-1)+ fiba(n-2);
        return(c);
    }
}

void main()
{

    int a,result;
    printf("enter the no upto which want to print fibannaco series");
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        result=fiba(i);
        printf("the fibanno no of %d is %d\n",i,result);
    }
    getch();
}
