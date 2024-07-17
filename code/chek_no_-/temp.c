#include<stdio.h>
#include<conio.h>
float main()
{
    float c,f;
    printf("Enter the value of temperature in celcius=");
    scanf("%f",&c);
    f=(1.8*c+32);
    printf("valu of temperature in farenheit= %f",f);
    getch();
}