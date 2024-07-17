//15.wap for calculator while using arithmetic operator and if else.
#include<stdio.h>
#include<conio.h>
main()
{
    int x,y;
    char o;
    printf("Enter your operater\n");
    scanf("%c",&o);
    printf("Enter your first number\n");
    scanf("%d",&x);
    printf("Enter your second number\n");
    scanf("%d",&y);
    {
        if(o=='+')
        printf("add=%d",x+y);
        else if(o=='-')
        printf("sub=%d",x-y);
        else
        if(o=='*')
        printf("multiplication=%d",x*y);
        else
        if(o=='/')
        printf("division=%d",x/y);
        else
        if(o=='%')
        printf("remaider=%d",x%y);
        else
        printf("invalad operater");
    }    
    getch();
}