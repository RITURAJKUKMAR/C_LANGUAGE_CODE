//AND OR Logical
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("enter any no.\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("logical AND =%d\n",a<b&&c>a);
    printf("logical OR =%d",d<a||c<b);
    getch();
}