//13.2_Logical Operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,x,y,z;
    printf("enter the four number");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=a<c&&b>d;
    y=c>a||c<d;
    z=a!=d;
    printf("Logical AND Operator =%d\n",x);
    printf("Logical OR Operator =%d\n",y);
    printf("Logical NOT Operator =%d\n",z);
    getch();
}