//22.wap to print cowel and cosonant usong switch case.
#include<stdio.h>
#include<conio.h>
main()
{
    char c;
    printf("enter any character\n");
    scanf("%c",&c);    
    switch(c)
    {
        case'a':
        printf("vowel");
        break;
        case'e':
        printf("vowel");
        break;
        case'i':
        printf("vowel");
        break;
        case'o':
        printf("vowel");
        break;
        case'u':
        printf("vowel");
        break;
        default:
        printf("consonant");
    }
    getch();
}