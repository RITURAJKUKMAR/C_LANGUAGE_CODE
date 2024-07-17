#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a year\n");
    scanf("%d",&x);
    if(x%4==0)
    {
        if(x%100==0)
        {
            if(x%400==0)
                printf("%d is leap year",x);
            else                
                printf("%d is not leap year",x);
        }
        else
            printf("%d is leap year",x);
    }
    else
        printf("%d is not leap year",x);
    getch();
}