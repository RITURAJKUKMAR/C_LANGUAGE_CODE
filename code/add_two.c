#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b>c)
    {
        printf("the number a is greatest");
    }
    if(b>c && b>a)
    {
        printf("b is greatest");
    }
    else{
        printf("c is the greatest");
    }
    return 0;
}