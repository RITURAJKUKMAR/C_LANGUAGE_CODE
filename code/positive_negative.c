#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%f",&x);
    if(x>0)
    {
        printf("positive number");

    }
    if(x<=0)
    {
        printf("negative number");

    }
    getch();
}