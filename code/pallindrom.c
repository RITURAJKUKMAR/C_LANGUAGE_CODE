//pallindrom number
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a=0,r;
    printf("Enter a number\n");
    scanf("%d",&x);
    int n=x;
    while(x>0)
    {
        r=x%10;
        a=a*10+r;
        x=x/10;
    }
    if(n==a)
        printf("%d is pallindrom number.\n",n);
    else
        printf("%d is not pallindrom number.\n",n);
    getch();
}