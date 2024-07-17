#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
FILE *p;
void puta()
{
    char a[50],c;
    p=fopen("f1.txt","w");
    if(p==NULL)
    {
        printf("File is not open\n");
        exit(1);
    }
    printf("Enter your message\n");
    fflush(stdin);
    gets(a);
    for(int i=0;i<strlen(a);i++)
        fputc(a[i],p);
    fclose(p);
}
void print()
{
    int a,b;
    p=fopen("f1.txt","a");
    if(p==NULL)
    {
        printf("file is not oopen\n");
        exit(1);
    }
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    fprintf(p,"\nSum of %d and %d is %d\n",a,b,a+b);
    fclose(p);
}
void put()
{
    char a[50];
    p=fopen("f1.txt","a");
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
int main()
{
    puta();
    print();
    put();
    getch();
}