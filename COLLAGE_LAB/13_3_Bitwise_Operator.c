//13.3_Bitwise Operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,x,y,z,l,r,e;
    printf("Enter the four number\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=a&b;
    y=c|d;
    e=a^d;
    z=~d;
    l=a<<3;
    r=d>>5;
    printf("Bitwise AND Operator =%d\n",x);
    printf("Bitwise OR Operator =%d\n",y);
    printf("Bitwise XOR Operator =%d\n",e);
    printf("Bitwise NOT Operator =%d\n",z);
    printf("Bitwide LEFT SHIFT Operator =%d\n",l);
    printf("Bitwise RIGHT SHIFT Operator =%d\n",r);
    getch();
}