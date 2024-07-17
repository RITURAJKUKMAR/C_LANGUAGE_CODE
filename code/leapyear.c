#include<stdio.h>
#include<conio.h>
main()
{
    int year;
    printf("Enter your year\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("year is leap year");
            }
            else
            printf("year is not leap year");
        }
        else
        printf("year is leap year");
    }
    else
    printf("year is not a leap year");
    getch();
}