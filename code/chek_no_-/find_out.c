#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    for(a=6,b=4;a<=24;a=a+6)
    {
        if(a%b==0)
            break;
    }
    printf("%d",a);
    getch();
}