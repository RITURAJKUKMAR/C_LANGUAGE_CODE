#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int arr[4][4],i,j;
    srand(time(NULL));
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            
            int r=rand()%15;
            printf("| %d\t|",r);
        }
        printf("\n");
    }
}