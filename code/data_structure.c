#include<stdio.h>
#include<conio.h>
struct RITU
{
    char name[20];
    int roll_no;
    char village[20];
    float marks;  
}r;
int main()
{
    printf("Enter your name\n");
    gets(r.name);    
    printf("Enter your marks\n");
    scanf(" %f",&r.marks);
    printf("Enter your roll no\n");
    scanf(" %d",&r.roll_no);
    printf("Enter your village name\n");
    fflush(stdin);
    gets(r.village);
    printf("your name is %s\n",r.name);
    printf("your roll no is %d\n",r.roll_no);
    printf("your village is %s\n",r.village);
    printf("your marks is %f\n",r.marks);
    getch();
}