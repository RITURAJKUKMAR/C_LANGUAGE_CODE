//20.wap to check eligibiliry criteria for marriage.
#include<stdio.h>
#include<conio.h>
main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>=22&&age<=30)
        printf("you are eligible for marriage");
    else
        printf("you are not eligible for marriage");
    getch();
}