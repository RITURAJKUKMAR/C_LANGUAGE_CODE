//5.wap to read and print any character,intger and float value.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    char y;
    float z;
    printf("Enter the any character\n");
    scanf("%c",&y);
    printf("Enter the any number \n");
    scanf("%d",&x);
    printf("Enter the any float value \n");
    scanf("%f",&z);
    printf("\nYour number is %d\n",x);
    printf("Your character is %c\n",y);
    printf("Your float value is %f\n",z);
    getch();
}