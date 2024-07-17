#include<stdio.h>
#include<conio.h>
main()
{
    int m;
    printf("enter your marks");
    scanf("%d",&m);
    if(m>=300)
    {
        printf("first");
    }
    else if(m>=250)
    {
        printf("second");
    }
    else if(m>=145)
    {
        printf("third");
    }
    else
    {
    printf("you are fail");
    }
    getch();

}