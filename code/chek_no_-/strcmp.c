#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char first_name[20],second_name[20];
    int check;
    printf("enter 1st name\n");
    gets(first_name);
    printf("enter 2nd name\n");
    gets(second_name);
    check=strcmp(first_name,second_name);
    if(check==0)
        printf("both string are equal");
    else if(check<0)
        printf("first name is smaller then 2nd sting");
    else if(check>0)
        printf("first name is greater than 2nd string");
    getch();
}