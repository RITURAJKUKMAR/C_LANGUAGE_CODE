#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,x,n,m;
    printf("enter element number=");
    scanf("%d",&n);
    printf("enter your array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(m<a[i])
        m=a[i];
    }
    printf("largest element=%d",m);
    getch();
}