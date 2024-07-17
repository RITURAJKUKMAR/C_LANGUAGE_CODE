//wap to find largesr of 3 number uding condition/ternary operator.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,l;
    printf("Enter any three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    l=a>b?(a>c?a:c):(b>c?b:c);
    printf("Largest number =%d",l);
    getch();
}