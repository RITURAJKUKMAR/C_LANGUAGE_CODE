#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char a[100],b[100];
    printf("enter your anme\n");
    gets(a);
    strcpy(b,a);
    printf("your name is %s",b);
    getch();
}