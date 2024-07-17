//77.wap to check whether string is palindrome or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("Enter any word\n");
    gets(a);
    strcpy(b,a);
    printf("\n%s\n",a);
    strrev(b);
    printf("%s\n",b);
    if(a[0]==b[0])
        printf("strinng is palindrome");
    else
        printf("string is not palindrme");
    getch();
}