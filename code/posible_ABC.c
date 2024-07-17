#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char x,y,z;
void RITU(int n,char a,char b,char c)
{
    if(n==1)
    {
        exit(1);
    }
    else
    {
        printf("%c %c %c\n",a,b,c);
        strcpy(x,c);
        strcpy(y,a);
        strcpy(z,b);
        RITU(n-1,a,b,c);
    }
}
void main()
{
    RITU(4,'a','b','c');
    getch();
}
//not final