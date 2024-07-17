#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdlib.h>
FILE *p;
void input()
{
    char a[100];
    p=fopen("R1.txt","w");
    if(p==NULL)
    {
        printf("file is not open\n");
        exit(1);
    }
    printf("Enter your message\n");
    gets(a);
    fputs(a,p);
    fclose(p);
}
void geta()
{
    char a;
    p=fopen("R1.txt","r");
    if(p==NULL)
    {
        printf("file is not open\n");
        exit(1);
    }
    a=fgetc(p);
    while(!feof(p))
    {
        printf("%c",a);
        a=fgetc(p);
    }
    printf("\n");
    fclose(p);
}
void scan()
{
    char a[500];
    p=fopen("R1.txt","r");
    if(p==NULL)
    {
        printf("file is not open\n");
        exit(1);
    }
    while(!feof(p))
    {
        fscanf(p,"%s ",&a);
        printf("%s ",a);
    }
    printf("\n");
    fclose(p);
}
void get()
{
    char a[500];
    p=fopen("R1.txt","r");
    if(p==NULL)
    {
        printf("file is not open\n");
        exit(1);
    }
    while(!feof(p))
    {
        fgets(a,10,p);
        printf("%s",a);
    }    
    fclose(p);
}
void main()
{
    input();
    geta();
    scan();
    get();
    getch();
}

/*#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void creat()
{
    FILE *p;
    p=fopen("Ritu.txt","w");
    if(p==NULL)
    {
        printf("File is not created\n");
        exit(1);
    }
    else
        printf("File is created\n");
    fclose(p);
}
void write()
{
    FILE *p;
    char a[100];
    p=fopen("Ritu.txt","w");
    if(p==NULL)
    {
        printf("File is not open\n");
        exit(1);
    }
    else
        printf("\nFile is open\n");
    printf("\nEnter your message\n");
    gets(a);
    for(int i=0;i<strlen(a);i++)
        fputc(a[i],p);
    fclose(p);
}
void readc()
{
    FILE *p;
    char a;
    p=fopen("Ritu.txt","r");
    if(p==NULL)
    {
        printf("\nFile is not open for reading\n");
        exit(1);
    }
    else
        printf("\nFile is open for reading\n");
    a=fgetc(p);
    while(!feof(p))
    {
        printf("%c",a);
        a=fgetc(p);
    }
    fclose(p);
}
void reads()
{
    FILE *p;
    char a[100];
    p=fopen("Ritu.txt","r");
    if(p==NULL)
    {
        printf("\nFile is not found\n");
        exit(1);
    }
    else
        printf("\nfile is found\n");
    while(fgets(a,5,p)!=NULL)
        printf("%s",a);
    fclose(p);
}
void put()
{
    FILE *p;
    char a[100];
    p=fopen("Ritu.txt","w");
    if(p==NULL)
    {
        printf("file is not open\n");
        exit(1);
    }
    else
        printf("\nfile is open\n");
    printf("Enter your sms\n");
    gets(a);
    fputs(a,p);
    fclose(p);
}
int main()
{
    creat();
    write();
    readc();
    reads();
    put();
    getch();
}*/