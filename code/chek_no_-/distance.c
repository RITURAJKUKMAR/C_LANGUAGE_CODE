#include<stdio.h>
#include<conio.h>
float main()
{
    float cm,m,km;
    printf("Enter distance in km\n");
    scanf("%f",&km);
    m=1000*km;
    cm=100*m;
    printf("The lenght is m=%f and cm=%f",m,cm);
}