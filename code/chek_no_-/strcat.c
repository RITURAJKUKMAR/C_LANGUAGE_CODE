#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char first_name[20],second_name[20];
    printf("enter 1st name\n");
    gets(first_name);
    printf("enter 2nd name\n");
    gets(second_name);
    strcat(first_name,second_name);
    printf("your full name is %s",first_name);
    getch();
}