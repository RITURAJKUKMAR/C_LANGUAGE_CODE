//WAP to print in c to find greatest common divisor of two numbers using recursion.
#include<stdio.h>
#include<conio.h>
int RITU(int,int);
int main()
{
    int a,b,g;
    printf("Enter any two number\n");
    scanf("%d%d",&a,&b);
    g=RITU(a,b);
    printf("GCD=%d",g);
    getch();
}
int RITU(int a,int b)
{
    int r;
    r=a%b;
    if(r==0)
        return b;
    else
        return (RITU(b,r));
}