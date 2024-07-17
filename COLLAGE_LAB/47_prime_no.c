//47.wap to check if the entered number is prime or not using function.
#include<stdio.h>
#include<conio.h>
int RITU(int);
int main()
{
    int n,x,y,p;
    printf("Enter a number\n");
    scanf("%d",&n);
    p=RITU(n);
    if(p==0)
        printf("%d is not prime number",n);
    else
        printf("%d is prime number",n);
    getch();
}
int RITU(int n)
{
    int r=1,i;
    for(i=2;i<n;i++)
    {
        r=n%i;
        if(r==0)
        break;
    }
    return r;
}