//7.wap to print SI where principal,rate of interest and time is taken from the user.
#include<stdio.h>
#include<conio.h>
float main()
{
    float p,r,t,si;
    printf("Enter the value principal,rate and time for SI");
    printf("\nprincipal=");
    scanf("%f",&p);
    printf("\nrate=");
    scanf("%f",&r);
    printf("\ntime=");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Your SI=%f",si);
    getch();
}