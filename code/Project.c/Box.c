#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,j,arr[4][4],b=1;
    for(i=0;i<6;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("arr[%d][%d]==%d&&",i,j,b);
            b++;
        }
    }
    getch();
}