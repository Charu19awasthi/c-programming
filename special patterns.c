#include <stdio.h>
#include <conio.h>

star(int num)
{
    // pattern
    //   *
    //   *
    // *****
    //   *
    //   *
    int c;
    if(num%2!=0)
     c=num/2+1;
    else
        c=num/2;
    for(int i=1;i<=num;i++)
    {
        if(i==c)
        {
            for(int j=1;j<=num;j++)
                printf("*");
        }
        else
        {
            for(int j=1;j<=num;j++)
                if(j==c)
                    printf("*");
                else
                printf(" ");
        }
        printf("\n");

    }
}

hollowrect(int l,int b)
{
    // pattern 
    // * * * * * * 
    // *         *
    // *         *
    // * * * * * *
    for(int a=1;a<=b;a++)
    {
        if(a==1 || a==b)
       {
            for(int br=1;br<=l;br++)
            printf("* ");
       }
       else
       {
           for(int br=1;br<=l;br++)
           {
               if(br==1 || br==l)
                printf("* ");
               else
                printf("  ");
           }
       }
       printf("\n");
    }
}

void main()
{
    int seq,length,breadth;
    printf("enter sequence");
    scanf("%d",&seq);
    star(seq);
    printf("\n\nenter length for hollow rec");
    scanf("%d",&length);
    printf("enter breadth");
    scanf("%d",&breadth);
    hollowrect(length,breadth);
    getch();

}

