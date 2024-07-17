#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    while(1)
    {
        if(kbhit())
        {
            c=getch();
            printf("\nchar=%c",c);
            break;
        }
        else
            printf("RITU");
    }
    getch();
}