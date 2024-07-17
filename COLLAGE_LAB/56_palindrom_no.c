//wap to check is enterd number is palindrom or not using recursion.
#include<stdio.h>
#include<conio.h>
int RITU(int,int);
int main()
{
    int n,x,s=0;
    printf("enter a number\n");
    scanf("%d",&n);
    x=RITU(n,s);
    if(n==x)
    printf("your number is palindrom number");
    else
    printf("your number is not palinsrom number");
    getch();
}
int RITU(int n,int s)
{
    int r;    
    if(n==0)
    return s;
    else
    {
        r=n%10;
        s=s*10+r;
        return (RITU(n/10,s));
    }
}