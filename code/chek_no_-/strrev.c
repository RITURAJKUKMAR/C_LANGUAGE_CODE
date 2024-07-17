#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[20]="RITU";
    printf("the sting before using strrev() is %s \n",s);
    strrev(s);
    printf("the string after using strrev() is %s \n",s);
    getch();
}