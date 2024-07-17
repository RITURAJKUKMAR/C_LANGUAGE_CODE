#include<stdio.h>
#include<conio.h>
struct STUDENT
{
    int roll;
    char name[20],b[5];
}a[10];
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("enter student name\n");
        fflush(stdin);
        gets(a[i].name);
        printf("Enter roll number\n");
        scanf("%d",&a[i].roll);
    }
    for(i=0;i<2;i++)
    {
        printf("name= %s\n",a[i].name);
        printf("roll number= %d\n",a[i].roll);
    }
    getch();
}