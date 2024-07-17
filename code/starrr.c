#include<stdio.h>
#include<conio.h>
main()
{
    int j,i,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=10;j++)
        {
            if(6-i<=j&&j<=4+i&&k)
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }    
        }
        printf("\n");
    }    
    getch();
}