//9.wap to convert distance from kilo meter to meter.
#include<stdio.h>
#include<conio.h>
float main()
{
    float m,km,cm;
    printf("Enter the value of distance in km");
    printf("\nkm=");
    scanf("%f",&km);
    m=1000*km;
    cm=100*m;
    printf("value of distance is m=%f and cm=%f",m,cm);
    getch();
}