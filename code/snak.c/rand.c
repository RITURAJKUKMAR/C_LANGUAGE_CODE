#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    for(int i=0;i<10;i++)
    {
        a=rand();
        b=rand()%40;
        printf("a=%d b=%d\n",a,b);
    }
    getch();
}