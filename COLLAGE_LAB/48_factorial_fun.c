//48.wap to print factorial using function.
#include<stdio.h>
#include<conio.h>
int RITU(int);
int main()
{
    int n,x;
    printf("Enter a number\n");
    scanf("%d",&n);
    x=RITU(n);
    printf("factorial of %d =%d",n,x);
    getch();
}
int RITU(int n)
{
    int x,i;
    x=n;
    for(i=1;i<n;i++)
    {
        x=x*i;
    }
    return x;
}