#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a=0;
    for(i=1;i<=9;i++)
    {
        i<=5?a++:a--;
        for(j=1;j<=7;j++)
        {
            if(j<=a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}