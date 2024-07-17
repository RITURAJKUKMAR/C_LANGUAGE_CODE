#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *p,*q;
    int i,f=0;
    char s[100];
    p=fopen("coop1.txt","w");
    if(p==NULL)
    {
        printf("file is not open\n");
        exit(1);
    }
    printf("Enter your sms\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
        fputc(s[i],p);
    q=fopen("coop2.txt","w");
    if(q==NULL)
    {
        printf("2nd file is not open\n");
        exit(1);
    }
    for(i=0;i<strlen(s);i++)
    {
        fputc(s[i],q);
        f++;
    }
    printf("Total charecter = %d\n",f);
    if(strlen(s)==f)
        printf("file copy seccesfully\n");
    fclose(p);
    fclose(q);
}