//35.wap to print following pattern.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x=65,a;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%c",x);
                x++;
            }
        }        
        printf("\n");       
    }
    getch();
}