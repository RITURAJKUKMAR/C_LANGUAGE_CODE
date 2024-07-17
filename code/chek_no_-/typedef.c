#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct
{
    int code;
    char name[20];
    int age;
}RITU;
int main()
{
    RITU a;
    a.code=101;
    printf("code=%d\n",a.code);
    strcpy(a.name,"RITURAJ");
    a.age=29;
    printf("code=%d\n",a.code);
    printf("Name=%s\n",a.name);
    printf("Age=%d\n",a.age);
    getch();
}