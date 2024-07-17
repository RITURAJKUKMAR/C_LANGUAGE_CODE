#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=2,p=10,a=4,b=7;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=11;j++)
        {
            if((j>k&&j<p||(i==3||i==4))&&(j<=3+i||9-i<=j))
            printf("*");
                else
            printf(" ");  
        }
        i<3?a++:(a=-20);
        i<3?p++:(i<4?p=12:p--);
        i<3?k--:(i<4?k=0:k++);
        printf("\n");
    }
    getch();
}