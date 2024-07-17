//wap to largest no. of two no.
#include<stdio.h>
#include<conio.h>
main()
{
    int x,y,z;
    printf("enter any two number\n");
    scanf("%d%d",&x,&y);
    z=x>y?x:y;
    printf("your largest number is =%d",z);
    getch();
}