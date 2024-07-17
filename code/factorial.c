#include<stdio.h>
#include<conio.h>
int RITU(int n)
{
    if(n==1)
        return 1;
    else
        return n*RITU(n-1);
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Factorial of %d= %d",x,RITU(x));
    getch();
}