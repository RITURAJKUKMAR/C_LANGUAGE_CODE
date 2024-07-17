#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,b=10;
    b=a+b-(a=b);
    printf("a=%d,b=%d",a,b);
    getch();
}