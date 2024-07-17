#include<stdio.h>
#include<conio.h>
struct RITU
{
    char name[20];
    int roll_no;
    char city[20];
};
struct RITU r;
int main()
{
    printf("Enter name\n");
    gets(r.name);
    printf("Enter roll no.\n");
    scanf("%d",&r.roll_no);
    printf("Enter city name\n");
    fflush(stdin);
    gets(r.city);
    printf("\nName= %s",r.name);
    printf("\nroll no. =%d",r.roll_no);
    printf("\ncity =%s",r.city);
    getch();
}