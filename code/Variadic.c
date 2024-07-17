#include<stdio.h>
#include<conio.h>
#include<stdarg.h>
void RITU(int s,...)
{
    int i;
    int v;
    va_list r;
    va_start(r,s);
    for(i=0;i<s;i++)
    {
        v=va_arg(r,int);
        if(i==3||i==5||i==6)
        {
            printf("%s ",v);
        }
    }
    va_end(r);
}
void main()
{
    RITU(7,"4","*","6","RITU","3","RAJ","KUMAR");
    getch();
}

/*#include<stdio.h>
#include<conio.h>
#include<stdarg.h>
void RITU(int s,...)
{
    int i;
    int v;
    va_list r;
    va_start(r,s);
    for(i=0;i<s;i++)
    {
        v=va_arg(r,int);
        printf("%d  ",v);
    }
    va_end(r);
}
void main()
{
    RITU(5,4,5,6,8,3);
    getch();
}*/