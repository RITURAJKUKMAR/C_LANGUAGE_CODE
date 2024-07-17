#include<stdio.h>
#include<conio.h>
int main()
{
    float x=1.8;
    int *y;
    y=(int*)&x;
    long n=*y;
    printf("%d",n);
    getch();
}