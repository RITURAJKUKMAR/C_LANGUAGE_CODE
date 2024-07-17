#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct book
{
    int bookid;
    char title[20];
    float price;
}b;
void write()
{
    FILE *p;
    p=fopen("book.dat","wb");
    if(p==NULL)
    {
        printf("file is not open\n");
        exit(1);
    }
    else
        printf("file is open\n");
    printf("Enter bookid\n");
    scanf("%d",&b.bookid);
    printf("Enter book title\n");
    fflush(stdin);
    gets(b.title);
    printf("Enter book price\n");
    scanf("%f",&b.price);
    fwrite(&b,sizeof(b),1,p);
    fclose(p);
    getch();
}
void read()
{
    FILE *p;
    p=fopen("book.dat","rb");
    if(p==0)
    {
        printf("file is not open\n");
        exit(1);
    }
    else
        printf("\nfile is open\n");
    fread(&b,sizeof(b),1,p);
    printf("%d\n%s\n%f\n",b.bookid,b.title,b.price);
    fclose(p);
}
int main()
{
    write();
    read();
    getch();
}