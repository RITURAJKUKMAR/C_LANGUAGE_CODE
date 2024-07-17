//12.wap to print the percentage of five subject.
#include<stdio.h>
#include<conio.h>
float main()
{
    float per,m,c,p,e,pps;
    printf("Enter your sub  marks\n");
    printf("\nMath=");
    scanf("%f",&m);
    printf("\nChemistry=");
    scanf("%f",&c);
    printf("\nphysics=");
    scanf("%f",&p);
    printf("\nElectronics=");
    scanf("%f",&e);
    printf("\npps=");
    scanf("%f",&pps);
    per=(m+c+p+e+pps)/5;
    printf("your percentage of five sub=%f",per);
    getch();
}