#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char o;
    printf("Enter first number.\nN1= ");
    scanf("%d",&a);
    printf("Enter operater\nO= ");
    fflush(stdin);
    scanf("%c",&o);
    printf("Enter second number.\nN2= ");
    scanf("%d",&b);
    switch(o)
    {
        case'+':
            printf("Addition of %d and %d = %d",a,b,a+b);
            break;
        case'-':
            printf("Subtraction of %d and %d = %d",a,b,a-b);
            break;
        case'*':
            printf("Multipalication of %d and %d = %d",a,b,a*b);
            break;
        case'%':
            printf("Modulus of %d and %d = %d",a,b,a%b);
            break;
        case'/':
            printf("Division of %d and %d = %d",a,b,a/b);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
    getch();
}