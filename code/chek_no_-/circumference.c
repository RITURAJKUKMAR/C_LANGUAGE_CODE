#include<stdio.h>
#include<conio.h>
#define pi 3.14
float main()
{
    float r,c;
    printf("Enter the radius of circle for circumference\n");
    scanf("%f",&r);
    c=2*pi*r;
    printf("circumference is %f",c);
    getch();
    
}