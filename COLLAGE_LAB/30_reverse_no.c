//wap to print the reverse fo a entered number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n,y=0,r;
    printf("enter any number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        y=y*10+r;
        n=n/10;
    }
    printf("your reverse number=%d",y);
    getch();
}