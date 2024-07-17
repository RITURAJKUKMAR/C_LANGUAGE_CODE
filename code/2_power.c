#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=0;
    printf("Enter number\nN=");
    scanf("%d",&n);
    while(n>=2)
    {
        n=n/2;
        a++;
    }
    printf("Power=%d",a);
    getch();
}