//armstrong number from 1 to 1000.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,y=0,n,r,x;    
    printf("armstrong number 1 to 1000\n");    
    for(n=1;n<=1000;n++)
    {
        y=0;
        x=n;
        while(0<x)
        {
            r=x%10;
            y=y+r*r*r;
            x=x/10;      
        }
        if(n==y)
        printf("%d\n",y);
    }    
    getch();
}