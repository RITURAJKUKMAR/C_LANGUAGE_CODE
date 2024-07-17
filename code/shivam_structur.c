#include<stdio.h>
#include<conio.h>
struct SHIVAM
{    
    char father[20],name[20],mother[20],clg_name[30];
    int mobile_no,age;
}s;
void main()
{
    printf("Enter name=");
    fflush(stdin);
    gets(s.name);
    printf("\nEnter father s name=");
    gets(s.father);
    printf("\nEnter mother s name=");
    gets(s.mother);
    printf("\nEnter clg name=");
    gets(s.clg_name);
    printf("\nEnter mobile number=");
    scanf("%d",&s.mobile_no);
    printf("\nEnter age=");
    scanf("%d",&s.age);
    printf("\nname=%s\n",s.name);
    printf("father name=%s\n",s.father);
    printf("mother name=%d\n",s.mother);
    printf("clg name=%s\n",s.clg_name);
    printf("mobile number=%d\n",s.mobile_no);
    printf("age=%d\n",s.age);
    getch();
}