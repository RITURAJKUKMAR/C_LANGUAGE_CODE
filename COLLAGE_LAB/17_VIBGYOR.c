//17.wap to print the full form of VIBGYOR.
#include<stdio.h>
#include<conio.h>
main()
{
    char x,v,i,b,g,y,o,r;
    printf("enter any one=V I B G Y O R\n");
    scanf("%c",&x);
    if(x=='v')
        printf("V=violet");
    else if(x=='i')
        printf("I=indigo");
    else if(x=='b')
        printf("B=blue");
    else if(x=='g')
        printf("G=green");
    else if(x=='y')
        printf("Y=yellow");
    else if(x=='o')
        printf("O=orange");
    else if(x=='r')
        printf("R=red");
    else
    printf("invalid colour");
    getch();
}