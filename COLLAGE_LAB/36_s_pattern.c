//36.wap to print the following pattern.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(5-i<=j&&j<=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}