//wap to print sum of digit of a number recursion.
#include<stdio.h>
#include<conio.h>
int RITU(int,int);
int main()
{
    int n,d,y=0;
    printf("enter any number\n");
    scanf("%d",&n);
    d=RITU(n,y);
    printf("sum of digit of %d=%d",n,d);
    getch();
}
int RITU(int n,int y)
{
    int r,x;
    x=n;
    r=n%10;
    y=y+r;
    if(x==0)
    return y;
    else
    return (RITU(n/10,y));
}    