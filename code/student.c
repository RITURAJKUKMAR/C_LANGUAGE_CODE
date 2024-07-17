#include<stdio.h>
#include<conio.h>
struct student
{
    //int a;
    char clg_name;
};
int main()
{
    //struct student a={20};
    struct student clg_name={"A"};
    //printf("NO. = %d\n",a);
    printf("CLG name = %s\n",clg_name);
    getch();
}
//not final