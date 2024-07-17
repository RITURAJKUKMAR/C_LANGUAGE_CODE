#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    char pass,fail;
    pass='p';
    fail='f';
    printf("Enter your total number for chek number pass OR fail\n");
    scanf("%d",&x);
    printf("you are %c",x<30?fail:pass);
}