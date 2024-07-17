#include<stdio.h>
#include<conio.h>
int RITU (int);
main()
{
    int x,r,k=12;
    printf("enter a number\t");
    scanf("%d",&x);
    r=x+RITU(k);
    printf("r=%d",r);
    getch();
}
int RITU(int k)
{
    int i;
    printf("enter two number\t");
    scanf("%d",&i);
    k=i+k;
    printf("k=%d\n",k);    
}