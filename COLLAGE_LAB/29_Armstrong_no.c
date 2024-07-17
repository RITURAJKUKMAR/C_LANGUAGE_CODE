//wap to check if the entered number is armstrong number or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y=0,n,r;
    printf("enter your number");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        r=n%10;
        y=y+r*r*r;
        n=n/10;
    }
    if(x==y)
        printf("your number is armstrong number");
     else
        printf("your number is not armstrong number");
    getch();
}