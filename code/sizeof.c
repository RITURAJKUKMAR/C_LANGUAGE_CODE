#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y,z;
    printf("size of x is %d,\n",sizeof(x));
    printf("size(with sizeof operator) of x is %d,\n",(char*)(&x+1)-(char*)(&x));
    getch();
}