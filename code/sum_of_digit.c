#include<stdio.h>
#include<conio.h>
int main()
{
    int n,y=0,r;
    printf("Enter a number\n");
    scanf("%d",&n);
    int x=n;
    while(n>0)
    {
        r=n%10;
        y=y+r;
        n=n/10;
    }
    printf("sum of digit of %d = %d",x,y);
    getch();
}