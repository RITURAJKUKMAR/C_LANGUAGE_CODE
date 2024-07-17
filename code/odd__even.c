#include<stdio.h>
#include<conio.h>
main()
{
    int e,a;
    char even,odd;
    printf("Enter your number");
    scanf("%d",&e);
    {
        switch(e%2)
        {
            case 0:
            printf("even");
            break;
            case 1:
            printf("odd");

        }            
    }
    getch();
}





/*#include<stdio.h>
#include<conio.h>
main()
{
    int o;
    printf("enter any number");
    scanf("%d",&o);
    {
        if(o%2==1)
        {
            printf("your number is odd number");
        }
        else
        printf("your number is even number");
    }
    getch();
}*/