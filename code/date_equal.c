#include<stdio.h>
#include<conio.h>
int main()
{
    char n[30];
    printf("Enter your name");
    fflush(stdin);
    gets(n);
    printf("your name is %s",n);
    getch();
}