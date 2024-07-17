#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i;
    FILE *p;
    char c[1000];
    printf("Enter your message\n");
    gets(c);
    p=fopen("Ritu.txt","w");
    if(p==NULL)
    {
        printf("file is not open");
        exit(1);
    }
    for(i=0;i<strlen(c);i++)
        fputc(c[i],p);
    getch();
}