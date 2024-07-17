//WAP to implement strlen (), strcat (), strcpy (), strrev () using concept of functions.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void LEN(char [20],char [20]);
void REV(char [20]);
void CAT(char [20],char [20]);
void CPY(char [20],char [20]);
char main()
{
    char a[20],b[20];
    printf("Enter your first name\n");
    fflush(stdin);
    gets(a);
    printf("Enter your first name\n");
    gets(b);
    printf("\n1st NAME=%s\n",a);
    printf("2nd NAME=%s\n",b);
    LEN(a,b);
    CAT(a,b);
    REV(a);
    CPY(a,b);
    getch();
}
void LEN(char a[20],char b[20])
{
    int l;
    l=strlen(a)+strlen(b);
    printf("LEN=%d\n",l);
}
void REV(char a[20])
{
    strrev(a);
    printf("REV=%s\n",a);
}
void CAT(char a[20],char b[20])
{
    strcat(a,b);
    printf("FULL NAME=%s\n",a);
}
void CPY(char a[20],char b[20])
{
    strcpy(a,b);
    printf("2nd name in 1st name=%s\n",a);
}