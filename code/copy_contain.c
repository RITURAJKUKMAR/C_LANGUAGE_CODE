#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *p,*q;
    int i,f=0;
    char c,s[100];
    p=fopen("copy1.txt","w");
    if(p==NULL)
    {
        printf("copy1 file is not open\n");
        exit(1);
    }
    printf("Enter your massage.\n");
    fflush(stdin);
    gets(s);
    fputs(s,p);
    q=fopen("copy2.txt","a");
    if(q==NULL)
    {
        printf("copy2 file is not open");
        exit(1);
    }
    for(i=0;i<strlen(s);i++)
    {
        fputc(s[i],q);
        f++;
    }
    printf("%d",f);
    fclose(p);
    fclose(q);
}