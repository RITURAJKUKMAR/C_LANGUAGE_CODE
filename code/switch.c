#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    switch(i)
    {
        case 1: printf("\ni=%d",i++);
        case 2: printf("\ni=%d",++i);
        case 3: printf("\ni=%d",--i);
    }
    getch();
    return 0;
}