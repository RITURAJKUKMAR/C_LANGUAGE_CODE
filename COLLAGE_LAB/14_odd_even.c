//14.wap to print whether the entered number is odd or even.
#include<stdio.h>
#include<conio.h>
main()
{
    int x;
    printf("Enter any number\n");
    scanf("%d",&x);
    if(x%2==1)
    {
        printf("your number is odd number");
    }
    else
    printf("your number is even number");
    getch();
}