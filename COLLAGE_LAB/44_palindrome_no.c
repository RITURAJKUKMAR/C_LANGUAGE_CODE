//wap to check is the entered number is palindrome or not using function.
#include<stdio.h>
#include<conio.h>
int RITU(int);
int main()
{
    int n,x;
    printf("enter eny number\n");
    scanf("%d",&n);
    x=RITU(n);
    if(n==x)
    printf("%d is palindrome number",n);
    else
    printf("%d is not palindrome number",n);
    getch();
}
int RITU(int n)
{
    int r,y=0;
    while(n>0)
    {
        r=n%10;
        y=y*10+r;
        n=n/10;
    }
    return y;
}