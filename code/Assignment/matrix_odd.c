//wap to print sum of even and odd numbers of an array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x=0,y=0,i,j,a[100];
    printf("enter element no.\n");
    scanf("%d",&n);
    printf("enter array element\n");    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    x=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
         x=x+a[i];
    }
    printf("sum of odd element=%d\n",x);
    y=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
         y=y+a[i];
    }
    printf("sum of even element=%d",y);
    getch();
}