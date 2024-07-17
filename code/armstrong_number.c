#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x,r,y=0;
    printf("Enter a number\n");
    scanf("%d",&x);
    n=x;
    while(n>0)
    {
        r=n%10;
        y=y+r*r*r;
        n=n/10;
    }
    if(x==y)
        printf("%d is armstrong number",x);
    else
        printf("%d is not armstrong number",x);
    getch();
}