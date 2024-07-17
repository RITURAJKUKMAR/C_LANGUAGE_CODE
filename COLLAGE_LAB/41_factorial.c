//41.wap to print factorial using loop.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,x,f=0;
    printf("enter your number\n");
    scanf(" %d",&n);
    f=n;
    for(i=1;i<n;i++)
    {
        f=f*i;
    }
    printf("%d",f);
    getch();
}