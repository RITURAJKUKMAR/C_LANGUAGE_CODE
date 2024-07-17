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




/*#include<stdio.h>
#include<conio.h>
main()
{
    char c;
    printf("enter any character\n");
    scanf("%c",&c);
    {
        if(c=='a')
        printf("vowel");
        else if(c=='e')
        printf("vowel");
        else if(c=='i')
        printf("vowel");
        else if(c=='o')
        printf("vowel");
        else if(c=='u')
        printf("vowel");
        else
        printf("consonant");

    }
    getch();
}*/