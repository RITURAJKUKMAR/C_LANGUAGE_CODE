//wap to print the fibonacci series up to n number weth recursive function.
#include<stdio.h>
#include<conio.h>
int RITU(int);
int main()
{
    int n,k;
    printf("enter the number for fibonacci series\n");
    scanf("%d",&n);
    printf("fibonacci series=");
    for(int i=1;i<=n;i++)
    {
        k=RITU(i);
        printf("%d ",k);
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