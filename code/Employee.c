#include<stdio.h>
#include<conio.h>
struct employee
{
    int emp_code;
    char emp_name[20];
    char emp_designation[30];
    float emp_salary;
};
int main()
{
    struct employee a;
    printf("Enter employee name\n");
    fflush(stdin);
    gets(a.emp_name);    
    printf("Enter employee code\n");
    scanf("%d",&a.emp_code);
    printf("Enter emp asaly\n");
    scanf("%f",&a.emp_salary);
    printf("Enter emp_designation\n");    
    gets(a.emp_designation);
    printf("employee salary =%f\n",a.emp_salary);
    printf("employee name is %s\n",a.emp_name);
    printf("employee designation is %s\n",a.emp_designation);
    printf("employee code is %d\n",a.emp_code);
    getch();
}