#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char a[100],b[100];
    printf("enter your 1st name\n");
    gets(a);
    printf("enter your 2nd name\n");
    gets(b);
    strcat(a,b);
    printf("your full name is %s",a);
    getch();
}