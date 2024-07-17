//11.wap to print area and circumference of a circle and redius is entered through keyboard.
#include<stdio.h>
#include<conio.h>
#define pie 3.14
int main()
{
    int r;
    float area,cir;
    printf("Enter the value of redius\nR=");
    scanf("%d",&r);
    area=pie*(r*r);
    cir=2*pie*r;
    printf("area of circle=%f",area);
    printf("\ncircleference of circle=%f",cir);
    getch();
} 