//wap to print area of square, rectangle using function.
#include<stdio.h>
#include<conio.h>
int square_area(int);
int rectangle_area(int,int);
int main()
{
    int a_o_s,a_o_r,a,s,l,b,ar;
    printf("enter sides length of square\n");
    scanf("%d",&s);
    printf("enter length & width of rectangle\n");
    printf("l=");
    scanf("%d",&l);
    printf("\nb=");
    scanf("%d",&b);
    a=square_area(s);
    printf("area of square=%d\n",a);
    ar=rectangle_area(l,b);
    printf("area of rectangle=%d\n",ar);
    getch();
}
int square_area(int s)
{
    int a;
    a=s*s;
    return a;
}
int rectangle_area(int l,int b)
{
    int c;
    c=l*b;
    return c;
}