#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int B();
int go();
int key();
int snak();
int h=28,w=120,x,y,a,b,end,f;
int main()
{
    snak();
    system("color e");
    while(1)
    {
        B();
        
        key();
        go();    
    }   
    getch();
}
int B()
{
    int i,j;
    system("cls");
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
        {
            if(i==1||i==28||j==1||j==120)
                printf("D");
            else
            {
                if(i==a&&j==b)
                    printf("S");
                else if(i==x&&j==y)
                    printf(".");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
int snak()
{
    x=rand()%28;
    y=rand()%120;

    r1:
    a=28/2;
    if(a==0)
        goto r1;
    r2:
    b=120/2;
    if(b==0)
        goto r2;
}
int go()
{
    switch(f)
    {
        case 1:
            b--;
            break;
        case 2:
            a--;
            break;
        case 3:
            b++;
            break;
        case 4:
            a++;
            break;
        default:
            break;

    }    
}
int key()
{
    if(kbhit())
    {
        switch(getch())
        {
            case 'a':
                f=1;
                break;
            case 'w':
                f=2;
                break;
            case's':
                f=3;
                break;
            case'z':
                f=4;
                break;
            case'x':
                end=1;
                break;
        }
    }
}