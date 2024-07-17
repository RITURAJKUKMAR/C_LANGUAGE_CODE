#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char r[30];
    int l;
    printf("Enter your name\n");
    fflush(stdin);
    gets(r);
    l=strlen(r);
    printf("Length of your name =%d",l);
    getch();
}