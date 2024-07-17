#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,avg;
    printf("Enter your five subject marks.\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("percentage your marks= %d\n",avg);
    if(100>=avg&&avg>90)
        printf("A");
    else if(90>=avg&&avg>80)
            printf("B");
    else if(80>=avg&&avg>60)
            printf("C");
    else
        printf("D");
    getch();
}