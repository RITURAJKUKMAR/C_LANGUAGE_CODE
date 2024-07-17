//WAP that compares 2 given dates to store data, use structure. Show dates that contain 3 members date, month, year. If dates are equal then display message equal otherwise unequal.
#include<stdio.h>
#include<conio.h>
struct date
{
    int d,m,y;
}d1,d2;
int main()
{
    printf("Enter 1st date\n");
    scanf("%d%d%d",&d1.d,&d1.m,&d1.y);
    printf("Enter 2nd date\n");
    scanf("%d%d%d",&d2.d,&d2.m,&d2.y);
    printf("1st date=%d/%d/%d\n",d1.d,d1.m,d1.y);
    printf("2nd date=%d/%d/%d",d2.d,d2.m,d2.y);
    if((d1.d==d2.d)&&(d1.m==d2.m)&&(d1.y==d2.y))
        printf("\nDates are equal.");
    else
        printf("\nDates are not equal.");
    getch();
}