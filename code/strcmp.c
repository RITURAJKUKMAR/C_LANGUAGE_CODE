#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char a[100],b[100],c;
    printf("enter your 1st name\n");
    gets(a);
    printf("enter your 2nd name\n");
    gets(b);
    c=strcmp(a,b);
    if(c>0)
        printf("your 1st name is greater than 2nd name\n");
    if(c<0)
        printf("your 1st name is smaller than 2nd name\n");
    if(c==0)
        printf("your 1st is to 2nd name");
    
    getch();
}