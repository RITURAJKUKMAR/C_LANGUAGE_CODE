#include<stdio.h>
#include<conio.h>
#include"file1.c"
extern int y;
extern void fun();
int main()
{
    fun();
    printf("\ny=%d",y);
    getch();
}