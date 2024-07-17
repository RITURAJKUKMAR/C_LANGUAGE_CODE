#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,x;
    printf("Enter two no. for swapping\n");
    scanf("%d%d",&a,&b);
    x=a;
    a=b;
    b=x;
    printf("After swapping value a=%d and b=%d",a,b);

}