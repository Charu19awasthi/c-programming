#include <stdio.h>
#include <conio.h>
arm(int m)
{
    int p,rem,newa=0;
    p=m;
    while(m!=0)
    {
        rem=m%10;
        newa=newa+(rem*rem*rem);
        m=m/10;
    }
    if(p==newa)
    {
        printf("%d is armstrong",p);
    }
    else
    {
        printf("not a armstrong");
    }
}
arm2(int num)
{
    int n,r,d,y;
    for(n=1;n<=num;n++)
    {
        y=n;
        r=0;
        while(y!=0)
        {
            d=y%10;
            r=r+(d*d*d);
            y=y/10;
        }
        if(n==r)
        {
            printf("%d is armstrong\n",n);
        }


    }
}

void main()
{
    char cont='y';
    while(cont=='y')
    {
        char choice;
        int a,b;
        printf("enter your choice\n want to check for one no(o)\n want to check for range(r)\n");
        scanf("%c",&choice);
        if(choice=='o')
        {
            printf("enter a no");
            scanf("%d",&a);
            arm(a);
        }
        else if(choice=='r')
        {
            printf("enter no upto which want to see armstrong\n");
            scanf("%d",&b);
            arm2(b);
        }
        else
        {
            printf("invalid choice");
        }
    printf("\ndo you want to continue:\n(y/n)");
    scanf("%c",&cont);

    }
    getch();

}
