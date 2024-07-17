//wap to print sum of digits of a number using function.
#include<stdio.h>
#include<conio.h>
int RITU(int n);
int main()
{
    int n,x;
    printf("enter a number\n");
    scanf("%d",&n);
    x=RITU(n);
    printf("sum of digit %d =%d",n,x);
    getch();
}
int RITU(int n)
{
    int r,y=0;
    while(n>0)
    {
        r=n%10;
        y=y+r;
        n=n/10;
    }
    return y;
}