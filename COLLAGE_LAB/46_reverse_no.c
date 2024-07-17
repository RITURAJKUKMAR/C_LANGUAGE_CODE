//46.wap to print reverse of a number using function.
#include<stdio.h>
#include<conio.h>
int RITU(int);
int main()
{
    int n,x;
    printf("enter any number\n");
    scanf("%d",&n);
    x=RITU(n);
    printf("reverse number of %d =%d",n,x);
    getch();
}
int RITU(int n)
{
    int y=0,r;
    while(n>0)
    {
        r=n%10;
        y=y*10+r;
        n=n/10;
    }
    return y;
}