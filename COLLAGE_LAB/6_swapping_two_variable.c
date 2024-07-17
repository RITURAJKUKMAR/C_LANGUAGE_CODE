//6.wap to swapping of variable using third variable.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,x;
    printf("Enter two number for swapping");
    scanf("%d%d",&a,&b);
    printf("before swapping number a=%d and b=%d\n",a,b);
    x=a;
    a=b;
    b=x;
    printf("after swapping number a=%d and b=%d",a,b);
    getch();
}