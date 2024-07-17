#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[30];
    int length;
    printf("enter your name\n");
    gets(s);
    printf("your name has %d charater's",strlen(s));
    getch();
}