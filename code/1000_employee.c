#include<stdio.h>
#include<conio.h>
struct employee
{
    int code;
    char degnation[20],departement[20],city_of_posting[20],name[20];
    float salary;
};
struct employee e[100];
int main()
{
    int i;
    float s=20000;
    for(i=0;i<2;i++)
    {
        printf("Enter employee name \n");
        fflush(stdin);
        gets(e[i].name);
        printf("Enter employee degnation\n");
        fflush(stdin);
        gets(e[i].degnation);
        printf("Enter departement name of employee \n");
        fflush(stdin);
        gets(e[i].departement);
        printf("Enter city name  of posting of employee \n");
        fflush(stdin);
        gets(e[i].city_of_posting);
        printf("Enter employee salary\n");
        scanf("%f",&e[i].salary);
        printf("Enter employee code\n");
        scanf("%d",&e[i].code);
    }
    for(i=0;i<2;i++)
    {
        if(e[i].salary>s)
        {
            printf("\nemployee name=%s",e[i].name);
            printf("\nemployee code=%d",e[i].code);
            printf("\nemployee degnation=%s",e[i].degnation);
            printf("\ndepartement name of employee=%s",e[i].departement);
            printf("\ncity name  of posting of employee=%s",e[i].city_of_posting);
            printf("\nemployee salary=%f",e[i].salary);
        }
    }
    getch();}