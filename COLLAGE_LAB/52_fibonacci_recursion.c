//wap to print fibonacci series using recursion.
#include<stdio.h>
#include<conio.h>
int RITU(int);
int main()
{
    int i,n,r;
    printf("enter the value of number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=RITU(i);
        printf("%d ",r);
    }
    getch();
}
int RITU(int n)
{
    if(n==1||n==2)
    return 1;
    else
    return(RITU(n-1)+RITU(n-2));
}