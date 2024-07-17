#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int b();
int snak();
int h=28,w=120,c,d,x,y;
int main()
{
    snak();
    b();
    
    getch();
}
int b()
{
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(i==1||i==28||j==1||j==120)
                printf("E");
            else
                {
                    if(i==c&&j==d)
                        printf("s");
                    else
                        printf(" ");
                }
        }
        printf("\n");
    }
}
int snak()
{
    r1:
    c=28/2;
    if(c==0)
        goto r1;
    r2:
    d=120/2;
    if(d==0)
        goto r2;

}