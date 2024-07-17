//47.wap to check if the entered number is prime or not using function.
#include<stdio.h>
#include<conio.h>
int RITU(int);
int main()
{
    int n,x,y,p;
    for(int i=1;i<=100;i++)
    {
        n=i;
        p=RITU(n);
        if(p==0)
            printf("");
        else
            printf("%d ",n);
    }
    getch();
}
int RITU(int n)
{
    int r,x,i;
    x=n;
    for(i=2;i<x;i++)
    {
        r=n%i;
        if(r==0)
        break;
    }
    return r;
}