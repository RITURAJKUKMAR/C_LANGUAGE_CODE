#include<stdio.h>
#include<conio.h>
int main()
{
    int a=12;
    int *p=(int *)&a;
    printf("%d",*p);
    getchar();
    return 0;
}