#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int RITU(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return RITU(n-1)+RITU(n-2);
}
int main()
{
    int x,i;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("series=");
    for(i=1;i<=x;i++)
    {
        printf(" %d",RITU(i));
    }
    getch();
}