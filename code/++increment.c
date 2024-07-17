#include <stdio.h>
#include <conio.h>
int main()
{
    int x=6;
    x++;
    printf("%d  " ,x);
    ++x;
    printf("%d\n" ,x);
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("x + x = %d" ,x+x);
    getch();
}