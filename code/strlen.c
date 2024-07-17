#include<stdio.h>
#include<conio.h>
#include<string.h>
char main()
{
    char a[100];
    int length;
    printf("enter your name\n");
    gets(a);
    length=strlen(a);
    printf("your name length is %d",length);
    
    getch();
}