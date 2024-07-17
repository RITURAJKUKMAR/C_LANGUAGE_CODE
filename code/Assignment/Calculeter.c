//wap to make a calculeter.
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    char ch;
    printf("Enter operator\n");
    scanf("%c",&ch);
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    switch(ch)
    {
        case'+':c=a+b;
        {
            printf("sum of %d & %d =%d",a,b,c);
        }
        break;
        case'-':c=a-b;
        {
            printf("subtraction of %d & %d =%d",a,b,c);
        }
        break;
        case'*':c=a*b;
        {
            printf("multiplication of %d & %d =%d",a,b,c);
        }
        break;
        case'/':c=a/b;
        {
            printf("division of %d & %d =%d",a,b,c);
        }
        break;
        case'%':c=a%b;
        {
            printf("remainder of %d & %d =%d",a,b,c);
        }
        break;
        default:
        printf("invalid operator");
        getch();
    }
}