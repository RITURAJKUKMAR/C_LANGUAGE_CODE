#include<stdio.h>
#include<conio.h>
int FIBO(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return (FIBO(n-1)+FIBO(n-2));
}
void main()
{
    int n,k;
    printf("Enter the number for fibonacci series\nN=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        k=FIBO(i);
        printf("%d ",k);
    }
    getch();
}