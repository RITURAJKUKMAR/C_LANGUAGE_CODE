#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char a[100];
    printf("enter your name\n");
    gets(a);
    strrev(a);
    printf("your name reverse is %s",a);
    getch();
}