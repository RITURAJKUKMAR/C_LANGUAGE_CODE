//WAP to print sum of natural numbers using recursion in c.
#include<stdio.h>
#include<conio.h>
int RITU(int);
int main()
{
    int n,s;
    printf("Enter value of sum natual number\n");
    scanf("%d",&n);
    s=RITU(n);
    printf("sum of %d natural number=%d",n,s);
    getch();
}
int RITU(int n)
{
    if(n==1)
        return 1;
    else
        return (n+(RITU(n-1)));
}