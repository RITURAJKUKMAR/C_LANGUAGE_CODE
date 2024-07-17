//21.wap to print the number is even or odd using switch case.
#include<stdio.h>
#include<conio.h>
main()
{
    int x;
    printf("enter any number\n");
    scanf("%d",&x);
    switch(x%2)
    {
        case 0:
        printf("your number is even number");
        break;
        case 1:
        printf("your number is odd number");
    }
    getch();
}