#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int RITU(int a[])
{
    int i;
    for(i=0;i<16;i++)
    {
        return a[i];
    }
}
void main()
{
    int t,i,j,a[20],c[4][4],k=0;
    srand(time(NULL));
    for(i=0;i<16;i++)
    {
        r1:
        t=rand()%16;
        for(j=0;j<i;j++)
        {
            if(a[j]==t)
                goto r1;
        }
        a[i]=t;
    }
    for(i=0;i<16;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
    {
        c[i][j]=a[k];
        k++;
    }
    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
        printf("%d ",c[i][j]);
}