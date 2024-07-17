//number equal
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    printf("Enter any two number\n");
    scanf("%d%d",&a,&b);
    if (a+0==b)
    {
        printf("your number is equal");
    }
    else
    printf("your number is not equal");
    getch();
}