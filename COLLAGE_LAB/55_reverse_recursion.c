//wap to print reverse of a number using recursion.
#include<stdio.h>
#include<conio.h>
int RAJ(int,int);
int main()
{
    int n,x,s=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    x=RAJ(n,s);
    printf("reverse is=%d",x);
    getch();
}
int RAJ(int n,int s)
{
    int r;       
    if(n==0)
    return s;
    else
    {
        r=n%10;
        s=s*10+r;
        return (RAJ(n/10,s));
    }
}