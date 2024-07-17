#include<stdio.h>
#include<conio.h>
struct employee
{
    char emp_name[20];
    int emp_id;
    float emp_salary;
}a[10]; 
int main()
{
    int i,code,not=0;
    for(i=0;i<10;i++)
    {
        printf("enter employee name\n");
        fflush(stdin);
        gets(a[i].emp_name);
        printf("enter employee id\n");
        scanf("%d",&a[i].emp_id);
        printf("enter employee salary\n");
        scanf("%f",&a[i].emp_salary);
    }
    
    for(i=0;i<10;i++)    
        if(a[i].emp_salary>50000)
        {            
            printf("employee name is %s\n",a[i].emp_name);
            printf("employee code is %d\n",a[i].emp_id);
            printf("employee salary is %f\n",a[i].emp_salary);
        }    
    
    getch();
}