#include<stdio.h>
#include<conio.h>
void main()
{
    const int x=5;
    int *p;
    p=&x;
    ++*p;
    printf("x=%d",x);
    getch();
}