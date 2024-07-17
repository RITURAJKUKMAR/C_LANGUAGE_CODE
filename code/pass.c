#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value of A and B\n");
    scanf("%d%d",&a,&b);
    printf("AND Operaters %d %d %d %d",a<b&&a<b,a<b&&a>b,a>b&&a>b,a>b&&a<b);
    printf("\nOR Operater %d %d %d %d",a<b||a<b,a<b||a>b,a>b||a>b,a>b||a<b);
    getch();
}