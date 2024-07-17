//wap to check if the entered number is armstrong number or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,n,r;
    for(int i=1;i<=1000;i++)
    {
        y=0;
        n=i;
        x=n;
        while(n>0)
        {
            r=n%10;
            y=y+r*r*r;
            n=n/10;
        }
        if(x==y)
            printf("%d ",y);
    }
    getch();
}