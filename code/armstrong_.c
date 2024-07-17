#include<stdio.h>
#include<conio.h>
int RITU(int n,int y)
{
    int r;
    r=n%10;
    y=y+r*r*r;    
    if(n==1)
        return y;
    else        
        return RITU(n/10,y);
}
int main()
{
    int n,x,y=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    x=RITU(n,y);
    if(n==x)
        printf("%d is armstrong number.",n);
    else
        printf("%d is not armstrong number.",n);
    getch();
}