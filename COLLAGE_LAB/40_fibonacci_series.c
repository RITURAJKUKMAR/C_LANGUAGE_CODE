//40.wap to print fibonacci series loop.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,y=0,n=1,s;
    printf("enter any number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=y+n;
        printf("%d\t",n);
        y=n;
        n=s;
    }
    getch();
}
//run slow?