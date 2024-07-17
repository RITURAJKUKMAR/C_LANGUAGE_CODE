//wap to print factorial using recursion.
#include<stdio.h>
#include<conio.h>
int RITU(int);
int main()
{
    int n,x;
    printf("enter a number\n");
    scanf("%d",&n);
    x=RITU(n);
    printf("factorial of %d =%d",n,x);
    getch();
}
int RITU(int n)
{
    if(n==1)
    return 1;
    else
    return (n*RITU(n-1));
}