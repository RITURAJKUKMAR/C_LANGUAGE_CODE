//38.wap to print the following pattern.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("%d",x);
        }
        x--;
        printf("\n");
    }
    getch();
}