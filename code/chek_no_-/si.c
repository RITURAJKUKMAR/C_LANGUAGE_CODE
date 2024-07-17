#include<stdio.h>
#include<conio.h>
float main()
{
    float p,t,r,si;
    printf("Enter the value finding for SI\n");
    printf("\nprincipal=");
    scanf("%f",&p);
    printf("\nrate=");
    scanf("%f",&r);
    printf("\ntime=");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("your SI is %f",si);
    getch();

}