//wap that check whether the two number entered by the user are equal of not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter first numbere\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    if(a==b)
        printf("Numbers are equal");
    else
        printf("Numbers are not equal");
    getch();
}