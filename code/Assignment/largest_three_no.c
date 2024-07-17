/*wap to three largest no.*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,l;
    printf("enter any thtee number\n");
    scanf("%d%d%d",&a,&b,&c);
    l=a<b?(b>c?b:c):(a>c?a:c);
    printf("your largest number is =%d",l);
    getch();
}