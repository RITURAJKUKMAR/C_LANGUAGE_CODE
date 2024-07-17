#include<stdio.h>
#include<conio.h>
union RITU
{
    int x;
    char y;
    float z;
}a;
void main()
{
    a.x=4;
    printf("\nx=%d",a.x);
    a.y='R';
    printf("\ny=%c",a.y);
    a.z=5.5;
    printf("\nz=%f\n",a.z);
    printf("\nx=%d\ny=%c\nz=%f",a.x,a.y,a.z);
    getch();
}