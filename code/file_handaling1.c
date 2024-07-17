#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i;
    FILE *f;
    char n[1000];
    printf("Enter your SMS\n");
    gets(n);
    f=fopen("NAME.txt","w");
    if(f==NULL)
    {
        printf("file is not open");
        exit(1);
    }
    for(i=0;i<strlen(n);i++)
        fputc(n[i],f);
    fclose(f);
    getch();
}