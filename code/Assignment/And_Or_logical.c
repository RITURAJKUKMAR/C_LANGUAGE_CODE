//AND OR Logical
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d,e,f,g,h;
    printf("enter any no.\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a<b&&b>a;
    f=c<d&&a>b;
    g=d>a&&c<b;
    h=a>d&&b>a;
    printf("logical AND =%d\n",e);
    printf("logical AND =%d\n",f);
    printf("logical AND =%d\n",g);
    printf("logical AND =%d",h);
    getch();
}