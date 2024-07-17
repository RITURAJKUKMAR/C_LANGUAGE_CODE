//23.wap to print full form of VIGYOR using switch case.
#include<stdio.h>
#include<conio.h>
main()
{
    char x;
    printf("enter any one=V I B G Y O R \n");
    scanf("%c",&x);
    switch(x)
    {
        case 'v':
        printf("V=violet");
        break;
        case'i':
        printf("I=indigo");
        break;
        case'b':
        printf("B=blue");
        break;
        case'g':
        printf("G=green");
        break;
        case'y':
        printf("Y=yellow");
        break;
        case'o':
        printf("O=orange");
        break;
        case'r':
        printf("R=red");
        break;
        default:
        printf("invalid colour");
    }
    getch();
}