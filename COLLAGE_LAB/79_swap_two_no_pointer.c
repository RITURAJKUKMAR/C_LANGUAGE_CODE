#include<stdio.h>
#include<conio.h>
int RITU(int*,int*);
int main()
{
    int a,b;
    printf("Enter any two number\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("before swaping value of a=%d and b=%d\n",a,b);
    RITU(&a,&b);
    printf("after swaping value of a=%d and b=%d",a,b);
    getch();
}
int RITU(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;    
}