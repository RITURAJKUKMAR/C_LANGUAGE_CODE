#include<stdio.h>
#include<conio.h>
void fun1();
void fun();
int main()
{
    extern int a;
    printf("%d\n",a);
    fun1();
    fun();
    getch();
}
void fun1()
{
    int a=2;
    ++a;
    printf("a=%d\n",a);
}
void fun()
{
    printf("hello");
}
int a=10;