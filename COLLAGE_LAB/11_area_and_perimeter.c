//11.wap to prant area and perimeter of a triangle and circle.
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float main()
{
    float p_of_triangle,p_of_circle,a_of_triangle,r,h,b,s,a_of_circle;
    printf("Enter the value side of triangle");
    printf("\ns=");
    scanf("%f",&s);
    printf("\nh=");
    scanf("%f",&h);
    printf("\nb=");
    scanf("%f",&b);
    printf("Enter the value of radius of circle");
    printf("\nr=");
    scanf("%f",&r);
    p_of_triangle=(3*s);
    printf("perimeter of triangle is %f\n",p_of_triangle);
    a_of_triangle=(0.5*h*b);
    printf("Area of triangle is %f\n",a_of_triangle);
    p_of_circle=(2*pi*r);
    printf("perimeter of circle is %f\n",p_of_circle);
    a_of_circle=(pi*r*r);
    printf("Area of circle is %f",a_of_circle);
    getch();
}