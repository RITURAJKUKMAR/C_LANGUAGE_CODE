#include<stdio.h>
#include<conio.h>
int main(int n,char *a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%s ",a[i]);
    }
    getch();
}