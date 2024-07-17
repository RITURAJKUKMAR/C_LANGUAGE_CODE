#include<stdio.h>
#include<conio.h>
main()
{
    float a,c,b;
    char ch;
    printf("enter your operater");
    scanf("%c",ch);
    printf("enter your 1st number");
    scanf("%d",a);
    printf("enter your 2nd number");
    scanf("%d",b);
    switch(ch)
    {
        case'+':c=a+b;
        {
            printf("sum is %d",c);
        }
        break;
        case'-':c=a-b;
        {
            printf("sub is %d",c);
        }
        break;
        
    }
}