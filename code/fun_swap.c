#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
    getch();
}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;   
}