#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y;
    printf("enter two number for division\n");
    scanf("%d %d" ,&x, &y);
    printf("%d / %d \n %d " ,x,y,x%y);
    getch();
    
}