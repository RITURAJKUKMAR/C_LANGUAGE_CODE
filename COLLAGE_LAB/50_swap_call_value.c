//wap to swap two variable by call by value method.
#include<stdio.h>
#include<conio.h>
int RITU(int,int);
int main()
{
    int a,b,x;
    printf("enter two number for swaping\n");
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    printf("value of A=%d and B=%d before swaping\n",a,b);
    RITU(a,b);    
    getch();
}
int RITU(int a,int b)
{
    int r;
    r=a;
    a=b;
    b=r;
    printf("value of A=%d and B=%d after swaping",a,b);
}