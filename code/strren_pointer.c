#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char n[20],*p;
    p=(char *)&n;
    printf("Enter your name\n");
    gets(n);
    char*strrev(char *);
    printf("reverse your name= %s",n);
    getch();
}
//not final