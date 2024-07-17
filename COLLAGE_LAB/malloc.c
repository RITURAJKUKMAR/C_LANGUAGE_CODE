#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(sizeof(4));
    printf("Enter a number.\n");
    scanf("%d",p);
    printf("your number is %d",*p);
    free(p);
    getch();
}