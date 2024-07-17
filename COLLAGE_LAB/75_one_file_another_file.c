#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
FILE *p,*q;
void one()
{
    char a[500];
    p=fopen("first.txt","w");
    if(p==NULL)
    {
        printf("file is not open\n");
        exit(1);
    }
    printf("Enter your message\n");
    fflush(stdin);
    gets(a);
    fputs(a,p);
    fclose(p);
}
void ftwo()
{
    char a[500];
    p=fopen("first.txt","r");
    if(p==NULL)
    {
        printf("first file is not open\n");
        exit(1);
    }
    q=fopen("second.txt","w");
    if(q==NULL)
    {
        printf("second file is not open\n");
        exit(1);
    }
    fputs(a,p);
    fputs(a,q);
    fclose(p);
    fclose(q);
}
void main()
{
    one(p);
    ftwo();
    getch();
}