#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    float marks;
    int roll_no;    
};
struct student a[100];
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter student name\n");
        fflush(stdin);
        gets(a[i].name);
        printf("Enter student marks\n");
        scanf("%f",&a[i].marks);
        printf("Enter roll no\n");
        scanf("%d",&a[i].roll_no);        
    }
    for(i=0;i<2;i++)
    {
        printf("student name is %s\n",a[i].name);
        printf("student marks is %f\n",a[i].marks);
        printf("student roll no is %d\n",a[i].roll_no);
    }    
    getch();
}