//wap to print fibonacci series using function.
#include<stdio.h>
#include<conio.h>
int RITU(int);
int main()
{
    int n,x;
    printf("enter a number\n");
    scanf("%d",&n);
    x=RITU(n);
    getch();
}
int RITU(int n)
{
    int i,y=0,s,x=1,r;
    for(i=1;i<=n;i++)
    {
        s=y+x;
        printf("%d ",x);
        y=x;
        x=s;
    }
}
//run slow