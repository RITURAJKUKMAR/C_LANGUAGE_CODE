//13.6_Increement and Decreement Operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
    printf("value of a is =%d\n",a++);
    printf("value of a is =%d\n",a);
    printf("value of a is =%d\n",++a);
    printf("value of b is =%d\n",b--);
    printf("value of b is =%d\n",--b);
    printf("value of b is =%d\n",b);
    getch();
}