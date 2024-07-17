//4.wap to print ASCII of any character.
#include<stdio.h>
#include<conio.h>
main()
{
    char c;
    printf("enter any character");
    scanf("%c",&c);
    printf("The ASCII value of character %C is %d", c,c);
    getch();
}