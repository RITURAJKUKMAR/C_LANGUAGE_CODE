#include<stdio.h>
#include<conio.h>
int f,x=1,y=1;
int r();
int snak();
int key();
int move();
int main()
{
    for(int i=0;i<4;i=3)
    {
        snak();
        r();        
        key();
        move();
        for(int i=0;i<43365;i++)
        for(int j=0;j<4572;j++)
        {
            
        }
    }
    getch();
}
int r()
{
    system("cls");
    for(int i=1;i<50;i++)
    {
        for(int j=1;j<50;j++)
        {
            x=(i+j)/2;
            y=(i+j)/2;
            if(i==x&&j==y)
            {
                system("color c");
                printf("**");
            }
            else
                printf(" ");            
        }
    }
    
}
int key()
{
    char n;
    if(kbhit())
    switch(getch())
    {
        case'w':
            f=1;
            break;
        case's':
            f=2;
            break;
        case'z':
            f=3;
            break;
        case'a':
            f=4;
            break;
    }
}
int move()
{
    switch(f)
    {
        case 1:
            x--;
            break;
        case 2:
            y++;
            break;
        case 3:
            x++;
            break;
        case 4:
            y--;
            break;
    }
}
int snak()
{
    r1:
    x=28/2;
    if(x==0)
        goto r1;
    r2:
    y=120/2;
    if(y==0)
        goto r2;
}