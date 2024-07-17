//28.wap to check if entered number is palindrome number or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n,y=0,r;
    printf("enter your number");
    scanf("%d",&n);
    x=n;    
    while(n>0)
    {
        r=n%10;
        y=y*10+r;
        n=n/10;
    }
    if(y==x)
        printf("your number is palindrome");           
    else
        printf("your number is not polindrome number");
    getch();
}