//26.5_wap to print the table 1 to 20 using while loop.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x=1,y;
    printf("enter your number for table n=");
    scanf("%d",&y);
    while(x<=10)
    {
        printf("%d\n",x*y);
        x++;
    }
    getch();
}