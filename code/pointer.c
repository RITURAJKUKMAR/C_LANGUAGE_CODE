#include<stdio.h>
#include<conio.h>
void main()
{
    int a,*k;
    k=&a;
    printf("Enter a number A=");
    scanf("%d",&a);
    printf("\nA=%d \nK=%x \nA=%d \nK=%x ",a,&a,*k,*&k);
    getch();
}