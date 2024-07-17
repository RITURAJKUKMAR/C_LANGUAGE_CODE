//27.wap to caculate the sum of digit of any numbar.
#include<stdio.h>
#include<conio.h>
int main()
{
    int y=0,n,r;
    printf("enter your number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        y=y+r;
        n=n/10;
    }
    printf("sum digit =%d",y);
    getch();
}