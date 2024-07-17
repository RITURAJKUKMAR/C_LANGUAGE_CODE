//Grading A B C D
#include<stdio.h>
#include<conio.h>
main()
{
    float p,c,m,s,e,per;
    printf("enter your marks\n");
    scanf("%f%f%f%f%f",&p,&c,&m,&s,&e);
    per=(p+c+m+s+e)/5;
    if (per>90&&per<=100)
    {
        printf("A");
    }
    else if (per>80&&per<=90)
    {
        printf("B");
    }
    else if (per>60&&per<=80)
    {
        printf("c");
    }
    else
    {
        printf("d");
    }
    getch();
}