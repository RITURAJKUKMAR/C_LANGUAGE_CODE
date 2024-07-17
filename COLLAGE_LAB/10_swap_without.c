//10.wap to swap two variable without using third variable.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two variable no. for swapping\n");
    scanf("%d%d",&a,&b);
    printf("before swapping value is a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping value is a=%d and b=%d",a,b);
    getch();
}     