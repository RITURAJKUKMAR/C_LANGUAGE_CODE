//WAP to print the following pattern.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        int a=1;
        for(j=1;j<=5;j++)
        {            
            if(j>=6-i)
                printf("%d",a++);                
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}