//24.wap to make calculater using switch case.
#include<stdio.h>
#include<conio.h>
main()
{
    int x,y;
    char o;
    printf("enter your operater\n");
    scanf("%c",&o);
    printf("enter your first number\n");
    scanf("%d",&x);
    printf("enter your second number\n");
    scanf("%d",&y);
    switch(o)
    {
        case'+':
        printf("addition of %d and %d=%d",x,y,x+y);
        break;
        case'-':
        printf("subtraction of %d and %d=%d",x,y,x-y);
        break;
        case'*':
        printf("multiplication of %d and %d=%d",x,y,x*y);
        break;
        case'/':
        printf("division of %d and %d=%d",x,y,x/y);
        break;
        case'%':
        printf("raimender of %d and %d=%d",x,y,x%y);
        break;
        default:
        printf("invalid operater");
    }
    getch();
}