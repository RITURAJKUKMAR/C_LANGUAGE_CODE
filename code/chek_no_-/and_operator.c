#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("enter the four number");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("logical AND operator=%d",a<b&&c>d);
    getch();
    return 0;
}