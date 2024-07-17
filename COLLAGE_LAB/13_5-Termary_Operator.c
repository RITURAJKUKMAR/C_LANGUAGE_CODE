//13.5_Ternary Operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int p,a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    p=a>b?a:b;
    printf("your largest number is %d",p);
    getch();
}