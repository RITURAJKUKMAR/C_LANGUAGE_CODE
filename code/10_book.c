#include<stdio.h>
#include<conio.h>
struct book
{
    char title[30];
    float price;
    int page_no;
}a[10];
int main()
{
    int i;
    char ti[10];
    for(i=0;i<2;i++)
    {
        printf("Enter book title\n");
        fflush(stdin);
        gets(a[i].title);
        printf("Enter book price\n");
        scanf("%f",&a[i].price);
        printf("Enter book page number\n");
        scanf("%d",&a[i].page_no);
    }
    for(i=0;i<2;i++)
    {
        printf("book title=%s\n",a[i].title);
        printf("book price=%f\n",a[i].price);
        printf("book page number=%d\n",a[i].page_no);
    }    
    getch();
}