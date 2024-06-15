#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
           for(int j=1;j<=i;j++)
           printf("%d",j);
        }
        else
        {
             for(int j=65;j<65+i;j++)
             printf("%c",j);
        }
        printf("\n");
    }
    getch();
}
