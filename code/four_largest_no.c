//four largest number
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d,l;
    printf("Enter any four number\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    l=a<b?(b>c?b:c):(a>c?a:c);
    printf("your largest number is =%d",l);
    getch();
}
//not final