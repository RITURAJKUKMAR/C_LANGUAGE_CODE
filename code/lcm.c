#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x,y,n,t,a;
    printf("Etner two number\n");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        t=x;
        x=y;
        y=t;
    }
    for(i=1;;i++)
    {
        a=x*i;
        if(a%y==0)
        {
            n=a;
            break;
        }        
        else
        {
            if(x*y<i)
            {
                n=x*y;
                break;
            }
        }
    }
    printf("LCM of %d and %d = %d",x,y,n);
    getch();
}