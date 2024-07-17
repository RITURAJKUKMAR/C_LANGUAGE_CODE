#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,r=0;
    printf("Enter a number\nN= ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            r=1;
            break;
        }
    }
    if(r==1)
        printf("%d is not prime number.",n);
    else
        printf("%d is prime number.",n);
    getch();
}