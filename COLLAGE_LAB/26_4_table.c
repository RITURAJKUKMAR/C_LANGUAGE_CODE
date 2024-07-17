//26.4_wap to print the table 1 to 20 using for loop.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("enter your numrber for table n=");
    scanf("%d",&y);
    for(x=1;x<=10;x++)
    {
        printf("%d",x*y);
        printf(" \n");
    }
    getch();
}