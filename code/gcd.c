#include<stdio.h>
#include<conio.h>
int gcd(int,int);
main()
{
    int x,y,g;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    g=gcd(x,y);
    printf("your gcd =%d",g);
    getch();
}
int gcd(int x,int y)
{
    int r;
    r=x%y;
    if(r==0)
    return(y);
    else
    return(gcd(y,r));
    
}