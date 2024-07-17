//
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,p;
    printf("Enter the marks of five subjects\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    p=(a+b+c+d+e)/5;
    if(100>=p&&p>=90)
        printf("A");
    else if(90>p&&p>=80)
        printf("B");
    else if(80>p&&p>=60)
        printf("C");
    else
        printf("D");
    getch();
}