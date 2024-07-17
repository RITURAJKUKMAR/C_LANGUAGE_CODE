#include<stdio.h>
#include<conio.h>
main()
{
    int j,i;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(4+1==j||j==5+1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    getch();
}