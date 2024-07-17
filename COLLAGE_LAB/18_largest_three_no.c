//18.wap to print the largest of three number.
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,l;
    printf("enter any three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)     //l=a>b?(a>c?a:c):(c>b?c:b);
    {
      if(a>c)
      l=a; 
      else
      l=c;  
    }
    else
    {   
        if(b>c)
        l=b;
        else
        l=c;
    }
    printf("largest number=%d",l);
    getch();
}    