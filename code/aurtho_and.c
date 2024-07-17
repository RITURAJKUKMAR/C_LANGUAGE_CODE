#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,y;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    y=a<b&&b>a;
    printf("%d\n",y);
    y=a>4&&a<10;
    printf("%d",y);
    getch();
}