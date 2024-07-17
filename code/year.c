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
        if(x+y)
        printf("add=%d",x+y);
        else
        if(x-y)
        printf("sub=%d",x-y);
        else
        if(x*y)
        printf("multiplication=%d",x*y);
        else
        if(x/y)
        printf("division=%d",x/y);
        else
        if(x%y)
        printf("remaider=%d",x%y);
        else
        printf("invalad operater");
    }    
    getch();
}

/*#include<stdio.h>
#include<conio.h>
main()
{
    int year,a;
    char c;
    printf("Enter your year");
    scanf("%d",&year);
    a=year%4;
    switch(c)
    {
        case'a==0'(a==0);
        {
            printf("year is leap year");
        }
        beak;
        case
    }
}*/