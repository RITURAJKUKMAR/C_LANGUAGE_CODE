#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,*p,*q,**r,k;
    printf("Enter value of A=");
    scanf("%d",&a);
    printf("Enter value of B=");
    scanf("%d",&b);
    p=&a;
    q=&b;
    r=&p;
    printf("value of A=%d\n",*p);
    printf("value of A=%d\n",*q);
    **r=20;
    printf("value of A=%d\n",a);
    printf("&p=%x\n",r);
    k=q-p;
    printf("q-p=%x\n",k);
    k=p-4;
    printf("q+p=%x",k);
    getch();
}