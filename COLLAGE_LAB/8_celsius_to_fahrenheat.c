//8.wap to covert temperature from degree celsius to degree fahrenheit.
#include<stdio.h>
#include<conio.h>
float main()
{
    float c,f;
    printf("Enter the value of temperature in celsius\n");
    printf("c=");
    scanf("%f",&c);
    f=(32+c*1.8);
    printf("The value of temperature in fahrenheit=%f",f);
    getch();
}