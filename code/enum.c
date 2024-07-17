#include<stdio.h>
#include<conio.h>
int RAJ(int);
enum RITU
{
    falsh,true
}a;
void main()
{
    int n;
    int r;
    printf("Enter a number checking for even or odd\n");
    scanf("%d",&n);
    r=RAJ(n);
    if(r==0)
     printf("even");
    else
     printf("odd");    
    getch();
}
int RAJ(int n)
{
    if(n%2==0)
     return true;
    else
     return falsh;
}