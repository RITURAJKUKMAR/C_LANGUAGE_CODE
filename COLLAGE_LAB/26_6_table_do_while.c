//26.6_wap to print the table 1 to 20 using do while loop.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x=1,y;
    printf("enter your number for table n=");
    scanf("%d",&y);
    do
    {
        printf("%d\n",x*y);
        x++;
    }
    while(x<=10);
    getch();
}